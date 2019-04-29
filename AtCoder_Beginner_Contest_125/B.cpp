#include <iostream>
#include <cmath>
/**
    B - Resale	C++14 (GCC 5.4.1)
	Accepted
**/
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    string s;
    int N;
    cin >> N;
    vector<int> V(N);
    vector<int> C(N);
    for(int i = 0; i < N ; i++){
        cin >> V[i];
    }
    for(int i = 0; i < N ; i++){
        cin >> C[i];
    }
    int X = 0, Y = 0;
    for(int i = 0 ; i < N ;i++){
        if(V[i] > C[i]){
            X += V[i];
            Y += C[i];
        }
    }
    cout << X - Y << endl;
    return 0;
} 