#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string f(long n, string s){
    if ( n == 0 ){
        return s;
    }

    long a = n - 1;
    s += (char)('a' + (a % 26));
    
    return f(a / 26, s);
}


int main() {
    long long N;
    cin >> N;
    string ans = f(N, "");
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}