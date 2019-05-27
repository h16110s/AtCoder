/**
        	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<long long > A(N);
    vector<long long > B(N);

    for(int i = 0 ; i < N ; i++){
        cin >> A[i] >> B[i];
    }
    for(int i = 0 ; i < N ; i++){
        cout << A[i] % B[i] << endl;
    }
    return 0;
}