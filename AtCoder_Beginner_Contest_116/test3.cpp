#include <iostream>
#include <set>
using namespace std;

int typeBonus(int type){
    static set <int> t;
    t.insert(type);
    return t.size() * t.size();
}

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
    int K;
    int type[100];
    int value[100];
    long int dp[100][100];
    int weight[100];
    int bonus;

    cin >> N >> K;
    for(int i = 0; i < N ; i++){
        cin >> type[i] >> value[i];
        weight[i] = 1;
    }

    for(int i = 0; i < K ; ++i){
        dp[0][i] = 0;
    }
    for (int i = 0; i < N ; i++){
        for(int k = 0; k <= K; k++){
            if(k >= weight[i]){
                dp[i + 1][k] = max(dp[i][k - weight[i]] + value[i], dp[i][k]);
            }
            else {
                dp[i + 1][k] = dp[i][k];
            }
            cout << dp[i][k] << " ";
        }
        cout << endl;
    }

    cout<< dp[N][K] << endl;
    return 0;
}



/*
5 3
1 9
3 1
2 6
2 5
1 7
*/