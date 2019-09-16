;/**
    A - Poisonous Cookies    	C++14 (GCC 5.4.1)
    AC
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <queue>
using namespace std;

int main(){
    long long A, B, C;

    cin >> A >> B >> C;
    bool poi = false;
    long long count = 0;
    while(1){
        if(poi){
            if(B > 0){
                B--;
                count++;
                poi = false;
            }
            else if(A > 0){
                A--;
                poi = false;
            }
            else {
                break;
            }
        }
        else{
            if(C > 0){
                C--;
                count++;
                poi = true;
            }
            else {
                if(B > 0){
                    B--;
                    count++;
                }
                else {
                    break;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
