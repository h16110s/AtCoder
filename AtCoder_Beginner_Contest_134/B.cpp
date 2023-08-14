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
    int N,D ;
    cin >> N >> D ;
 
    if( (N % (2 * D + 1)) == 0) {
        cout << N / (2 * D + 1 ) << endl;
    }
    else {
        cout << N / (2 * D + 1) + 1 << endl;
    }
    // int count = 0;
    // for(int i = 0 ; i < 20 ; i++){
    //     if(N <= 0) break;
    //     N -= 2 * D;
    //     count++;
    // }
 
    // cout << count << endl;
    return 0;
}