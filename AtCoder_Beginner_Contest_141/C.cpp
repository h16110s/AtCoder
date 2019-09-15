/**
 * C - Attack Survival       C++14 (GCC 5.4.1)
 * AC
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm> 
#include <iterator>   
#include <set>
using namespace std;
 
int main(){
    int N ,Q;
    long long K;
    cin >> N >> K >> Q;

    vector<long long> A(N,K);
    for(int i = 0; i < Q ; i++){
        int ans;
        cin >> ans;
        ans--;
        A[ans]++;
    }

    for(int i = 0; i < N ; i++){
        if(A[i] - Q  > 0 ){
            cout << "Yes"<< endl;
        }
        else {
            cout << "No"  <<endl;
        }
    }

}