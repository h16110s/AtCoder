/**
        	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <numeric>
 
using namespace std;

typedef struct S{
    int num;
    int count;
} s;


int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> H(N);
    vector<s> P(N+1);
    vector<int> C(N);
    for(int i = 0 ; i < N ;i++){
        P[i].num = i;
    }   
    for(int i = 0 ;i < N-1 ; i++){
        int a, b;
        cin >> a >> b;
        H[i] = make_pair(a,b);
        P[a-1].count++;
        P[b-1].count++;
    }
    for(int i = 0 ; i < N ;i++){
        cin >> C[i];
    }   

    sort(C.begin(),C.end(),greater<int>());
    sort(P.begin(), P.end(), 
     [](const s& x, const s& y) { if(x.count == y.count) return x.num < y.num; else return x.count > y.count;});

    vector<int> A(N);
    int count = accumulate(C.begin()+1, C.end(), 0);

    for(int i = 0; i < N ;i++){
        cout <<C[i] << endl;
    }
    for(int i = 0; i < N ;i++){
        cout <<P[i].num <<" "<<P[i].count << endl;
    }

    for(int i = 0; i < N ;i++){
        A[P[i].num] = C[ i + 1 % N];
    }
    // A[N-1] = C[0];

    cout << count << endl;
    for(int i = 0; i < N ;i++){
        cout << A[i] << " ";
    }
    cout << endl;


    return 0;
} 