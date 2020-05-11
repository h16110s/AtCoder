#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long A, B, N;

    cin >> A >> B >> N;


    long long m = floor(A * min(N,B-1)/ B) - A * floor(min(N,B-1) / B);

    cout << m << endl;
}