/**
	B - Digital Gifts 	C++14 (GCC 5.4.1)
	Accepted
**/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    double ans = 0;

    for(int i = 0; i < N; i++){
        double value;
        string type;
        cin >> value >> type;

        if(type == "JPY"){
            ans += value;
        }
        else{
            ans += value*380000.0;
        }
    }
    cout << ans << endl;
}