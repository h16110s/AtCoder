#include <iostream>
using namespace std;

int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int N;
    int a[1010];
    int dp[1010];

    cin >> N >> K;
    for(int i = 0; i < N ; i++){
        cin >> a[i];
    }

    dp[0] = 0;
    for(int i = 0 ; i < N ; i++){
        dp[i + 1] = max(dp[i], dp[i] + a[i]);
    }

    cout << dp[N] << endl;
    return 0;
}