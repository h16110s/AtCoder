/**
    A	Darker and Darker    	C++14 (GCC 5.4.1)
    Accept
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
 
int main(){
    int N,A,B;
    cin >> N >> A >> B;
    if(N * A <  B){
        cout << N * A << endl;
    }
    else {
        cout <<  B << endl;
    }
}