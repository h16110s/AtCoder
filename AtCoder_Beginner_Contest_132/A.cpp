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
    char first = ' ';
    char second = ' ';
    string s ;
    cin >> s;
 
    first = s[0];
    int fcount = 1;
    int scount = 0;
    for(int i = 1 ; i < 4 ;i++){
        if(first == s[i]){
            fcount++; 
        }
        else{
            if(second == ' '){
                second = s[i];
                scount++;
            }
            else {
                if(second == s[i]){
                    scount++;
                }
            }
        }
    }
 
    // cout << fcount << " " << scount << endl;
    if(first != ' ' && second != ' ' && fcount ==2 && scount ==2){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
 
 
    return 0;
}