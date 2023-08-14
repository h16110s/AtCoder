#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int N, K;
    cin >> N >> K;

    vector<int> S(N,0);

    for(int i = 0; i < K ; i++){
        int d;
        cin >> d;
        for(int j = 0 ; j < d; j++){
            int s;
            cin >> s;
            S[s-1]++;
        } 
    }

    int count = 0;
    for(int i = 0; i < N ;i++){
        if(S[i] == 0) count++;
    }

    cout << count << endl;


    
    return 0;
}