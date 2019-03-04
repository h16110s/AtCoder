/**
    D - Decayed Bridges    C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> I(N,M);
    vector<int> A(M);
    vector<int> B(M);
    bool map[100000][100000];
    for (int i = 0; i < M ; i++){
        int a, b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
        I[a]++;
        I[b]++;
    }
    
    for (int i = 0; i < M ; i++){
        long long ans = 0;
        I[A[i]]--;
        I[B[i]]--;
        cout << ans <<endl;
    }
}