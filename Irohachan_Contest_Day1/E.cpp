/**
    E	放課後    	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    long long N, A, B;
    cin >> N >> A >> B;
    long long  count = 0;
    long long  last = 0;
    vector<int> D(B);
    for(int i = 0; i < B; i++){
        cin >> D[i];
    }

    sort(D.begin(), D.end());
    if(D[0] >= A){
        count += (D[0] / A);
        last = D[0];
    }
    else{
        count+=2;
        last += A;
    }

    for(int i = 1; i < B; i++){
        if(D[i] - last >= A){
            count+= (D[i] - last)/A;
            last = D[i];
        }
        else {
            count+= 2;
            last += A;
        }
    }
    
    count += (N -( D[N] + 1)) / A;
    count = count > N ? N : count;

    cout << N - count << endl;

    return 0;
}