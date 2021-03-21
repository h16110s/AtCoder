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

long long Min(long long a, long long b){
    if(a < b){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    int N;
    cin >> N;

    long long count = 0;


    for(int i = 0 ; i < N ; i++){
        long long A, B;
        cin >> A >> B;

        long long AA = A / 2;
        long long BB = B;

        count += Min(AA,BB);
    }

    cout << count << endl;

    return 0;
}