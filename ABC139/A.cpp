/**
    A - Tenki   	C++14 (GCC 5.4.1)
    Accepted
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
    string S;
    string T;
    cin >> S;
    cin >> T;

    int count = 0;
    for(int i = 0; i < 3 ; i++){
        if(S[i] == T[i]){
            count++;
        }
    }
    cout << count << endl;
}
