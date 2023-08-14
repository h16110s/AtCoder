/**
    A   -   Apple Pie    	C++14 (GCC 5.4.1)
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
    int A, P;
    cin >> A >> P;

    P += A * 3;

    cout << P / 2 << endl;
    return 0;
}