/**
    A - Biscuit Generator	C++14 (GCC 5.4.1)
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
    string s;
    int A, B;
    double T;
    cin>>A>>B>>T;

    cout <<((int)( T / A )) * B << endl;
 
    return 0;
}