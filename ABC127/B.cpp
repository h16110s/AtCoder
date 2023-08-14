/**
    B   -   Algae    	C++14 (GCC 5.4.1)
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
    int r, D, x;
    cin >> r >> D >> x;

    for(int i = 0 ; i < 10 ; i++){
        cout << r * x - D << endl;
        x =  r * x - D ;
    }
    return 0;
}