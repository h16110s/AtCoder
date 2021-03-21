#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0;
    int N = 0, M = 0;
    string s;
    
    cin >> a >> b >> c;

    if(a < c && c < b){
        cout << "Yes" << endl;
    }
    else if (b < c && c < a){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    

    return 0;
}