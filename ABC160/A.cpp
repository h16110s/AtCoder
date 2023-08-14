#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    string s;
    cin >> s;

    if(s[2] == s[3]){
        if(s[4] == s[5]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }
    return 0;
} 