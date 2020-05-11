#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int X;
    cin >> X; 

    long long  A = 0;
    long long  B = 0;

    for(A= -1000 ; A < 1000; A++){
        for( B = -1000 ; B < 1000 ;B++ ){
            if(pow(A,5) - pow(B,5) == X){
                cout << A << " "<< B << endl;
                return 0;
            }
        }
    }
}