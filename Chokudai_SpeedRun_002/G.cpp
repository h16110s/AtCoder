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

long long Max(long long a, long long b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

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

    vector<int> ans(N);

    for(int i = 0 ; i < N ; i++){
        long long A, B;
        cin >> A >> B;

        long long L = Max(A,B);
        long long S = Min(A,B);
 
        long long R = L % S;
        while(R != 0){
            L = S;
            S = R;
            R = L % S;
        }
        ans[i] = S;
    }


    for(int i = 0 ; i < N ; i++){
        cout << ans[i] << endl;
    }




    return 0;
}