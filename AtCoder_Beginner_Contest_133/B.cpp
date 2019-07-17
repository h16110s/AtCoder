/**
    A	Darker and Darker    	C++14 (GCC 5.4.1)
    Accept
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int main(){
    int N, D;
    cin >> N >> D;
    int count = 0 ;
    vector<vector<int>> X ;
    X = vector<vector<int>>(N,vector<int>(D,0));
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < D ; j++){
            cin >> X[i][j];
        }
    }
    for(int i = 0 ; i < N-1 ; i ++){
        for(int j = i + 1 ; j < N; j++){
            double m = 0;
            for(int k = 0; k < D ; k++){
                m +=pow(abs(X[j][k] - X[i][k]),2);
            }
            if(floor(sqrt(m) ) == ceil(sqrt(m))){
                count++;
            }
            // cout << i <<" "<< j << " "<< m << endl;
        }
    }

    cout << count << endl;
}