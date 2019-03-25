/**
  C - GeT AC	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N,C;
    string s;
    vector<string> ss;
    cin >> N >> C;
    cin >> s;
    for(int i = 0 ; i < C ; i++){
        int a, b;
        cin >> a >> b;
        string str = s.substr(a - 1, b-a+1);
        ss.push_back(str);
    } 
    for(int i = 0 ; i < C ; i++){
        
    } 
}