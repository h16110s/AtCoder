/**
    C   -   Prison    	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<int> L(M);
    vector<int> R(M);
    
    for(int i = 0 ; i < M ; i++){
        cin >> L[i] >> R[i];
    }

    int LL = *std::max_element(L.begin(),L.end());
    int RR = *std::min_element(R.begin(),R.end());

    if(LL <= RR){
        cout <<  RR - LL  + 1  << endl;
    }
    else{
        cout<< 0 << endl;
    }
    
    return 0;
}
