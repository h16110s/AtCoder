#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    long long N, K;
    cin >> N >> K;
    
    vector<long long> A(N);
    vector<long long> F(N,0);

    for(long long i = 0; i < N ; i++){
        cin >> A[i];
    }
    
    long long m = K ;

    long long n = 0;


    for(long long i = 0 ; i < m ; i++){
        // cout << n + 1 << endl;
        if(F[n] == 1) break;
        F[n]++;
        n = A[n] - 1;
    }

    long long initcount = 0;
    for(long long i = 0 ; i < N ; i++){
        if(F[i] == 1) initcount++;
    }

    for(long long i = 0 ; i < m ;i++){
        // cout << n + 1 << endl;
        if(F[n] == 2) break;
        F[n]++;
        n = A[n] - 1;
    }

    long long count = 0;
    for(long long i = 0 ; i < N ; i++){
        if(F[i] == 2) count++;
    }

    // cout << endl << initcount - count << endl;

    K -= (initcount - count);

    long long h = K % count;

    n = 0;
    for(long long i = 0 ; i < h + initcount ;i++){
        n = A[n] - 1;
    }
    cout << n + 1 << endl;
}