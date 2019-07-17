#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;



int main(){
    int N;
    cin >> N;
 
    vector<int> a(N);
    for(int i = 0 ;i < N ; i++){
        cin >> a[i];
    }
 
    vector<int> list(N);
    list[0] = a[0];
    list[1] = a[1];
    // a.erase(a.begin());
    a.erase(a.begin()+1);
    int list_end = 2;
    for(int i = 1 ;i < N ; i++){
        int x = list[i-1] ^ list[i];
        auto F = find(a.begin(), a.end(), x);
        if(F == a.begin() && list_end == N-1){
            list[list_end] = *F;
            list_end++;
            // a.erase(F);
        }
        else if (F == a.end()) {
            cout << "No" << endl;
            return 0;
        } 
        else {
            list[list_end] = *F;
            list_end++;
            a.erase(F);
        }
    }

    for(int i = 0 ;i < N ; i++){
        int m =(list[i % N] ^ list[( i+2 ) % N]);
        if(m != list[(i + 1) % N]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}