/**
    A   -   Ferris Wheel    	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if (A >= 13){
        cout << B << endl;
    }
    else if( 6 <= A && A <= 12 ){
        cout << B /2 << endl;
    }
    else {
        cout << 0 << endl;
    }
    
    return 0;
}