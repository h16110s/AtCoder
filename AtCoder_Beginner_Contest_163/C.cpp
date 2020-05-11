#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    long long N;

    cin >> N;

    vector<long long> A(N,0);

    for(int i = 0; i < N - 1 ; i++){
        long long m;
        cin >> m;
        A[m-1]++;
    }

    for(int i = 0; i < N ; i++){
        cout << A[i] << endl;
    }
    return 0;
}