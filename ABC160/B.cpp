#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    long long X;
    cin >> X;

    long long m = 0;
    m += (X / 500) * 1000;
    m += ((X % 500) / 5 ) * 5;

    cout << m << endl;
    return 0;
}