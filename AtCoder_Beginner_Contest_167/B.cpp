#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    long long A, B, C, K;
    cin >> A >> B >> C >> K;

    if (A >= K){
        cout << K << endl;
    }
    else if (A + B >= K){
        cout << A << endl;
    }
    else if( A + B + C >= K){
        K -= (A + B);

        cout << A - K << endl;
    }
}