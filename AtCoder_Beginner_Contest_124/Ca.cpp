/**
    C - Coloring Colorfully 	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int min(int a, int b){
    if( a < b ){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    string s;
    cin >> s;
    int countA = 0,countB = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 ){
            if(s[i] == '1'){
                countA++;
            }
        }
        else{
            if(s[i] == '0'){
                countA++;
            }
        }
    }
    countB = s.size() - countA;
    cout << min(countA, countB) << endl;
    return 0;
}