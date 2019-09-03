/**
    B - Power Socket      	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int main(){
    int  A;
    int  B;

    cin >> A >> B;

    int m = A;
    int count = 1;
    if(B == 1){
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i < 30 ; i++){
        if(m >= B){
            break;
        }
        else {
            count++;
            m--;
            m+=A;
        }
    }
    cout << count << endl;
}

