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
    int W;
    int weight[110];
    int value[110];
    int dp[110][110];

    cin >> N >> W;
    for(int i = 0; i < N ; i++){
        cin >> weight[i] >> value[i];
    }

    for(int i = 0; i < W ; ++i){
        dp[0][i] = 0;
    }
    
    for (int i = 0; i < N ; i++){
        for(int w = 0; w <= W; w++){
            if(w >= weight[i]){
                dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            }
            else {
                dp[i + 1][w] = dp[i][w];
            }
            cout << dp[i][w] << " ";
        }
        cout << endl;
    }
    cout << dp[N][W] << endl;
    return 0;
}