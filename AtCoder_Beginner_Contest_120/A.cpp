/**
    A - Favorite Sound	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(b / a >= c || a == 0){
        cout << c << endl;
    }
    else{
        cout << b / a << endl;
    }
}