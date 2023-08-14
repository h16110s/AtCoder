/**
    C   -   Dice and Coin    	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    double ans = 0.0;
    for(int i = 1; i <= N ; i++){
        int count = i;
        double k = 1.0 / N;
        while(count < K){
            k *= 1.0/2.0;
            count *= 2;
            // cout<< k << endl;
        }
        ans += k;
        // cout << endl;
    }
    cout << setprecision(10) <<ans << endl;
    return 0;
}