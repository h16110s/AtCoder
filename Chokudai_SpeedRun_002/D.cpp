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

    long long sum = 0;

    for(int i = 0 ; i < N ; i++){
        long long A, B;
        cin >> A >> B;
        if(A > B){
            sum += A;
        }
        else {
            sum += B;
        }
    }

    cout << sum << endl;

    return 0;
}