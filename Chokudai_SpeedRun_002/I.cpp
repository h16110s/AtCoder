/**
        	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;  

    vector<long long> A(N);
    vector<long long> B(N);

    cin >> A[0] >> B[0];
    int num = 0;
    bool draw = false;
    for(int i = 1 ; i < N ; i++){
        cin >> A[i] >> B[i];
        
        long long countA = A[num] / B[i]; //チャレンジャーが最強に勝つための回数
        if(A[num] % B[i] != 0) countA++;
        long long countB = A[i] / B[num]; // 最強がチャレンジャーに勝つための回数
        if(A[i] % B[num] != 0) countB++;

        if(countA < countB){
            draw = false;
            num = i;
        }
        if(countA == countB){
            draw = true;
        }
        // cout << countA << " " << countB << endl;
    }

    if(draw){
        num = -2;
    }

    cout << num + 1 << endl;
    return 0;
}