/**
    D - ModSum      	C++14 (GCC 5.4.1)
    Accepted
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
    long long N; 
    cin >> N;
    long long n = N-1;

    cout << (n * (n+1)) / 2  <<endl;
}
