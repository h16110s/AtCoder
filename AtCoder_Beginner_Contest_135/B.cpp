#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int main(){
    int N;
    cin >> N;

    vector<int> p(N);
    vector<int> pp(N);

    for(int i = 0; i < N ; i++){
        cin >> p[i];
        pp[i] = p[i];
    }

    sort(pp.begin(),pp.end());

    int count = 0;
    for(int i = 0; i < N ; i++){
        if(pp[i] != p[i]){
            count++;
        }
    }

    if(count % 2 == 0 && count / 2 < 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
