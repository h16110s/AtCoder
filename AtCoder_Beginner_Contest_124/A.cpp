/**
 	A - Buttons 	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int a, b;
    int ans = 0;
    cin >> a >> b;

    for (int i = 0 ; i < 2 ;i++){
        if(a > b){
            ans += a;
            a--;
        }
        else {
            ans += b;
            b--;
        }
    }
    cout << ans << endl;
    return 0;
}