#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int N, M;

    cin >> N >> M;

    vector<int> A(N);

    double sum =0;
    for(int i = 0; i < N ; i++){
        cin >> A[i];
        sum += A[i];
    }
    // cout << "s" <<sum << endl;
    sort(A.begin(),A.end(),std::greater<int>());
    
    if(A[M-1] >= (double)(sum / (4 * M)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}