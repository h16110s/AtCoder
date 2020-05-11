#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long N, M;
    cin >> N >> M;
    vector<long long> H(N);
    vector<long long> T(N,0);

    for(int i = 0 ; i < N ; i++){
        cin >> H[i];
    }

    for(int i = 0; i < M; i++){
        long long A, B;
        cin >> A >> B;
        if( H[A-1] > H[B-1]){
            T[B-1] = 1;
        }
        else if(H[A-1] < H[B-1]) {
            T[A-1] = 1;
        }
        else{
            T[A-1] = 1;
            T[B-1] = 1;
        }
    }
    
    long long count = 0;
    for(int i = 0 ; i < N ; i++){
        // cout << T[i] << endl;
        if(T[i] == 0) count++;
    }

    cout << count << endl;
}