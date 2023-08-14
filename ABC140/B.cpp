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

    vector<int> A(N);
    for(int i=0; i < N ; i++){
        cin >> A[i];
    }

    vector<int> B(N);
    for(int i=0; i < N ; i++){
        cin >> B[i];
    }

    vector<int> C(N-1);
    for(int i=0; i < N-1 ; i++){
        cin >> C[i];
    }

    int cc = 0;
    int count = B[A[0]-1];
    for(int i = 1; i < N ; i++){
        count += B[A[i]-1];
        // cout << B[A[i]-1] << endl;
        if(A[i-1] + 1 == A[i]){
            count += C[A[i-1]-1];
            // cout << i <<endl;
        }
    }

    cout << count << endl;
    return 0;
}