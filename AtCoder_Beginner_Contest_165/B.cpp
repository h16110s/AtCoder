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

    long long b = 100;

    int c = 0;
    while(b < X){
        b *= 1.01;
        c++;
    }

    cout << c << endl;
    return 0;
}