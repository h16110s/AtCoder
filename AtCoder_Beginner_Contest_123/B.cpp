/**
    B  -   Five Dishes	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int in[5];
    int sub = 0;
    int sum = 0;
    int mlos = 0;
    for(int i = 0; i < 5; i++){
        cin >> in[i];
        if(in[i] % 10 != 0){
            sub += 10 - (in[i] % 10);
            // ロスが一番多いものは最後に回す
            if(mlos < 10 - (in[i] % 10) ){
                mlos = 10 - (in[i] % 10);
            }
        }
        sum += in[i];
    } 
    // 総和とロス時間を全て足して一番ロスが大きいものは最後に回す
    cout <<  sum + sub - mlos << endl;
}