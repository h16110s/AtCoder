/**
    B - Can you solve this?     C++14 (GCC 5.4.1)
	Accepted
**/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,M,C;
    vector<int> B;
    int ans = 0;
    cin >> N >> M >> C;
    for(int i = 0; i < M ; i++){
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }
    for(int i = 0; i < N ; i++){
        int sum = 0;
        for (int j = 0 ; j < M ; j++){
            int tmp;
            cin >> tmp;
            sum += tmp * B[j];
        }
        if(sum + C > 0){
            ans++;
        }
    }
    cout << ans << endl;
}