/**
  A - Regular Triangle	C++14 (GCC 5.4.1)
	Accepted
**/

#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int a,b,c;
    cin>> a >> b >> c;
    if(a == b && b == c){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
}