/**
    B   -   YYMM or MMYY    	C++14 (GCC 5.4.1)
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
    int  s;
    cin >> s;

    int f = s / 100;
    int b = s % 100;
    
    if((1 <= f && f <= 12) && (1 <= b && b <= 12)){
        cout << "AMBIGUOUS" << endl;
    }
    else if((1 <= f && f <= 12)){
        cout << "MMYY" << endl;
    }
    else if((1 <= b && b <= 12)){
        cout << "YYMM" << endl;
    }
    else{
        cout << "NA" << endl;
    }

    return 0;
}