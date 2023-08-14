/**
        	C++14 (GCC 5.4.1)
**/
#include <iostream>
using namespace std;

int main(){
    long long H, W, A, B;

    cin >> H >> W >> A >> B;

    for(long long i = 0 ; i < H ; i++){
        for(long long j = 0 ; j < W ; j++){
            if((i < B && j < A )||(i >= B && j >= A) ){
                cout << 1 ;
            }
            else {
                cout << 0 ;
            }
        }
        cout << endl;
    }
}