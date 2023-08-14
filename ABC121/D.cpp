/**
    D - XOR World    C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main(){
    long A,B;
    long ans = 0;
    cin >> A >> B;
    if(A == B){
        cout << A << endl;
        return 0;
    }
    for(long i = 1; i < B - A ;){
        ans = ans ^ i;
        i += sqrt(i);
    }
    cout << ans << endl;
}