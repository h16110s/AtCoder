#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;



int main(){
    int N,P;
    cin >> N >> P;
    
    int count = P;
    int ans = 0;
    vector<int>A(N);
    for(int i = 0; i< N ; i++){
        cin >> A[i];
    }
    int i =0;
    for(i = 0; i< N ;i++){
        if(count >= A[i]){
            count -= A[i];
            ans++;
        }else{
            break;
        }
    }
    cout << i << endl;


    return 0;
}