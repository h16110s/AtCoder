/**
    A   -   Changing a Character   	C++14 (GCC 5.4.1)
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
    string s;
    int N,K;
    cin >> N >> K;
    cin >> s;

    switch(s[K-1]){
        case 'A': s[K-1] = 'a';
            break;
        case 'B': s[K-1] = 'b';
            break;
        case 'C': s[K-1] = 'c';
            break;
    }

    cout << s << endl;


    return 0;
}