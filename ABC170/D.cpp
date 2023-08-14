#include <iostream>
#include <vector>
using namespace std;


int main(){
    int M = 1000006;
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> C(M);
    vector<int> F(M, 1);

    for(int i = 0; i < N ; i++){
        cin >> A[i];
        C[A[i]] += 1;
    }

    for( int i = 1; i < M ; i++){
        for (int j = i; j < M ; j+=i){
            if( j == i ){
                F[j] = C[i] > 1 ? 0: F[j];
            }
            else{
                F[j] = C[i] > 0 ? 0: F[j];
            }
        }
    }
    
    int ans = 0;
    for( int i = 0; i < M ; i++){
        ans += C[i] * F[i];
    }

    cout << ans << endl;

}
