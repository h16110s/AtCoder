#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int N;
    int M;

    cin >> N >> M;

    vector<int>A(M);
    long long sum = 0;
    for(int i = 0; i < M ; i++){
        cin >> A[i];
        sum += A[i];
    }
    if(sum > N){
        cout << -1 << endl;
    }
    else {
        cout << N - sum << endl;
    }


    return 0;
}