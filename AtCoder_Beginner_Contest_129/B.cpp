/**
 * B    -   Balance 	C++14 (GCC 5.4.1)
 * Accepted
**/
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
    vector<int> W(N);
    // vector<int> S1(N);
    // vector<int> S2(N);
    for(int i = 0; i < N ;i++){
        cin >> W[i];
    }

    int ans = __INT_MAX__;
    for(int T = 1 ; T < N-1 ; T++){
        int S1 = 0;
        int S2 = 0;
        for(int i = 0; i <= T ;i++){
            S1 += W[i];
        }
        for(int i = T + 1; i < N ;i++){
            S2 += W[i];
        }
        ans = min(ans, abs(S1-S2));
    }
    cout << ans << endl;


    return 0;
}