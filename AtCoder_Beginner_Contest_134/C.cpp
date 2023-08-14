#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int mmax(vector<int> A, int N,int k){
    int max = 0;
    for (int i = 0 ; i < N ; i++){
        if(max < A[i] && i != k){
            max = A[i];
        }
    }
    return max;
}
 
int main(){
    int N ;
    cin >> N;
 
    vector<int > A(N);
    for (int i = 0 ; i < N ; i++){
        cin >> A[i];
    }
    int m = *max_element(A.begin(), A.end());
    bool b = true;
    for(int i = 0 ; i < N; i++){
        if(A[i] == m && b){
           cout << mmax(A,N,i) << endl;
           b = false;
        }
        else {
           cout << m << endl;
        }
    }
     
    return 0;
}