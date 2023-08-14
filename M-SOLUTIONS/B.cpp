 /**
    B   -   Sumo    	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for(int i = 0; i < s.size();i++){
        if (s[i] == 'o'){
            count++;
        }
    }   
    count += 15 - s.size();

    if(count >= 8){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}