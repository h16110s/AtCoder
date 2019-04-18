#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <numeric>
using namespace std;

int main(){
    int a = 0, b = 0;
    long long  N = 0; 
    cin >> N;
    vector<long long > A(N);
    vector<long long > B(N);

    for(int i = 0; i < N ;i++){
        cin >> A[i] >> B[i];      
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    long long in = -1 , out = -1;
    in = A[A.size()/2];
    out = B[B.size()/2];

    // cout << in << " " << out << endl;

    long long count = 0;
    for(int i = 0 ; i < N ; i++){
        count += abs(in - A[i]);
        count += abs(B[i] - A[i]);
        count += abs(B[i] - out);
    }

    cout << count << endl;
    return 0;
}