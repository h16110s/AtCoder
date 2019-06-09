/**
 * A    -   Airplane   	C++14 (GCC 5.4.1)
 * Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;



int main(){
    int P,Q,R;
    cin >> P >> Q >> R;

    int PP = P + Q;
    int QQ = Q + R;
    int RR = R + P;
    cout << min(PP,min(QQ,RR)) << endl;

    return 0;
}