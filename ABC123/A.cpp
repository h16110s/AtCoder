/**
    A  -  Five Antennas	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
using namespace std;

int main(){
    int in[5], k;

    for(int i = 0 ; i < 5 ; i++){
        cin >> in[i];
    }
    cin >> k ;
    // 別にこうしなくても1個目と5個目の距離がkを超えてるかだけを見ればいい
    for(int i = 1 ; i < 5 ; i++){
        if(in[i]- in[0] > k){
            cout << ":(" << endl;
            return 0;
        }
    }
    cout << "Yay!" <<endl;
}