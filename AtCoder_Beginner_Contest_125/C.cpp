/**
    C  -  GCD on Blackboard	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

long long Max(long long a, long long b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}


int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    long long min = 10000000000;
    long long max = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] < min){
            min = A[i];
        }
        if(A[i] > max){
            max = A[i];
        }
    }
    cout << min << " " <<max << endl;
    
    long long m = 0;
    for(long long i = 1; i <= min ; i++){
        long long  sum = 0;
        for(int j = 0; j < N ; j++){
            sum += (A[j] % i);
        }
        if(sum == 0){
            m = Max(m, i);
        }
        cout  << m << endl;
    }


    return 0;
}
