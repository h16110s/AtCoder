/**
    D   -   Even Relation    	C++14 (GCC 5.4.1)
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
    vector<int> w(N);
    vector<int> c(N,-1);
    for(int i = 0; i < N - 1; i++){
        int u;
        int v;
        cin >> u >> v >> w[i];
        // if (w[i][v-1] == -1) continue;
            if(w[i] % 2 == 0){
                if(c[u-1] == -1 && c[v-1] == -1){
                    c[u-1] = 0;
                    c[v-1] = 0;
                }
                else if(c[u-1] != -1){
                    c[v-1] = 0;
                }
                else if(c[v-1] != -1){
                    c[u-1] = 0;
                }
            }else {
                if(c[u-1] == -1 && c[v-1] == -1){
                    c[u-1] = 1;
                    c[v-1] = 1;
                }                
                else if(c[u-1] != -1 ){
                    c[v-1] = 1;
                }
                else if(c[v-1] != -1){
                    c[u-1] = 1;
                }
            }
    }
    
    for(int i = 0; i < N; i++){    
        cout << c[i] << endl;
    }
    
    

    return 0;
} 