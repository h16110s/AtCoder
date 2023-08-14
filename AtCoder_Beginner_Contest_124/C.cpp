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
    char c[100000];
    char tmp;
    cin >> c;
    int countA = 0;
    int cc = 0;
    for(int i = 0 ; c[i] != NULL; i++){
        if(i % 2){
            if(c[i] == '0'){
                countA++;
            }
        }
        else{
            if(c[i] == '1'){
                countA++;
            }
        }
        cc++;
    }
    int countB = cc - countA ;
    cout << min(countA, countB) << endl;
    
    return 0;
}