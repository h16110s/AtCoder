/**
    C - Unification     C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <vector>
using namespace std;
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
    char s[100000];
    int one = 0;
    int zero = 0;
    cin >> s;
    for(int i = 0 ; ; i++){
        if (s[i] == '1'){
            one++;
        }
        else if (s[i] == '0'){
            zero++;
        }
        else {
            break;
        }
    }
    int ans = min(one, zero) * 2;
    cout << ans << endl;
}