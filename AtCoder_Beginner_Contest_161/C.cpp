#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    long long N, K;

    cin >> N >> K;

    if( N % K == 0){
        cout << 0 << endl;
    }
    else if( abs(K - N) < N){
        cout << min( K - abs(N % K), abs(N%K) ) << endl;
    }
    else {
        cout << N << endl;
    }
}