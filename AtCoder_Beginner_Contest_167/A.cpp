#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;


    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != t[i]){ 
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}