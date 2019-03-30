/**
    B  -  Red or Blue	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    int R =0,B=0;
    for(int i = 0 ; i < N ; i++){
        char tmp;
        cin >> tmp;
        if(tmp == 'R'){
            R++;
        }
        else if(tmp == 'B'){
            B++;
        }
    }
    if(R > B){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}