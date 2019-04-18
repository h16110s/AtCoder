#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int a = 0, b = 0;
    int N = 0, M = 0;
    int T = 0;
    string s;
    cin >> N >> T;
    // vector<int> A(N);
    int sum = 0;
    for(int i = 0 ; i < N - 1 ; i++ ){
        int tmp; 
        cin >> tmp;
        sum += tmp;
    }

    if(sum % T == 0){
        cout << sum / T << endl;
    }
    else {
        cout << ( sum / T ) + 1 << endl;
    }
    return 0;
}