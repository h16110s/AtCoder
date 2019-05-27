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

    vector<long long > sum(N);

    for(int i = 0 ; i < N ; i++){
        long long A, B;
        cin >> A >> B;
        sum[i] = A + B;
    }

    long long max = *max_element(sum.begin(),sum.end());

    cout << max << endl;

    return 0;
}