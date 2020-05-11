#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    int m = 0; 
    cin >> A[0];
    for(int i = 1; i < N ; i++){
        cin >> A[i];
        m = max(m, A[i]- A[i-1]);
    }

    m = max(m, (K - A[N-1]) + A[0]);
    cout << K - m << endl;
    return 0;
}