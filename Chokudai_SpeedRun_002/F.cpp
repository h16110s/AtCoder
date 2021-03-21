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

    set<pair<int,int>> type;

    for(int i = 0 ; i < N ; i++){
        long long A, B;
        cin >> A >> B;
        pair<int, int> p = make_pair(A,B);
        pair<int, int> pi = make_pair(B,A);

        if(type.find(p) == type.end() && type.find(pi) == type.end()){
            type.insert(make_pair(A,B));
        }
    }

    cout << type.size() << endl;

    return 0;
}