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
    string s;
    int K;
    cin >> s;
    cin >> K;

    for(int i = 0; i < s.size(); i++){
        cout << s[(i + K ) % s.size()];
    }
    cout << endl;
    return 0;
}