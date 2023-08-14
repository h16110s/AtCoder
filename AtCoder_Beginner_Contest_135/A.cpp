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
    int A,B;
    cin >> A >> B;

    if(abs( (A + B) % 2 ) != 0){
        cout << "IMPOSSIBLE" << endl;
    } 
    else{
        cout << (A + B) / 2 << endl;
    }
}
