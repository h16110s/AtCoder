/**
 * B - Tap Dance       C++14 (GCC 5.4.1)
 * AC
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
    string s;
    cin >> s;

    bool odd = true;
    bool even = true;
    for(int i = 0 ; i < s.size() ; i++){
        if( (i + 1 ) % 2 == 1 ){
            if(s[i] == 'R' || s[i] == 'U' || s[i] == 'D' ){}
            else {
                odd = false;
            }
        }
        else if( (i + 1 ) % 2 == 0 ){
            if(s[i] == 'L' || s[i] == 'U' || s[i] == 'D' ){}
            else {
                even = false;
            }
        }
    }

    if(odd == true && even == true){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}