/**
    C - Lower      	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int max(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    int N; 
    cin >> N;

    vector<int> H(N);
    for(int i = 0; i < N ; i++){
        cin >> H[i];
    }

    int count = 0;
    int m = 0;
    for(int i = 1 ; i < N ; i++){
        if(H[i-1] >= H[i] ){
            count++;
            m = max(count, m);
            // cout << "a" <<endl;
        }
        else {
            count=0;
        }
    }
    cout << m << endl;


}

