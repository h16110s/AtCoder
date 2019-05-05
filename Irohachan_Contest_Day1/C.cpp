/**
    C	Halcyon    	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int d;
    cin >> d;

    for (int i = 0; i < 8; i++){
        cout << d - 7 + i << endl;
    }
    return 0;
}