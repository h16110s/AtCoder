/**
 * 	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;



int main(){
    long long  L, A, B, M;
    string m;
    cin >> L >> A >> B >> M;

    m = to_string(M);
    string s;
    unsigned long long r;
    for(long long i = 0 ; i < L; i++){
        s = s + to_string(A + B * i)  ;
        // r = stoll(s) % M;
    }
    string ss;
    cout <<s  << " "<< stoll(s) % M<< endl;
    // for(long long i = 0 ;i < s.size() ; i++){
    //     ss += s[i];
    //     // cout << s << endl;
    //     // cout << ss << endl;
    //     r = stoll(ss) % M;
    //     ss = to_string(r);
    // }
    // cout << stoll(ss) % M << endl;
    return 0;
}