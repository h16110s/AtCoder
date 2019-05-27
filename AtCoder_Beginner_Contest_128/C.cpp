/**
    C   -   Switches    	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <deque> 
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    // vector<int> V(N);
    vector<int> K(N);
    vector<vector<int>> S;
    vector<int> P(M);
    vector<set<int>>  list(N);

    for(int j = 0 ; j < M ; j++){
        int k;
        cin >> k;
        vector<int> s(k);
        for(int i = 0 ; i < k ; i++){
            cin >> s[i];
            list[i].insert(s[i]);
        }
        S.push_back(s);
    }
    for(int j = 0 ; j < M ; j++){
        cin >> P[j];
    }
    for( ; ; ){
        
    }




    
    return 0;
}