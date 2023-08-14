#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int K;
    int A,B;

    cin >> K;
    cin >> A >> B;

    if (B - A >= K || K == 1 ){
        cout<<"OK"<<endl;
    }
    else{
        for(int i = A; i <= B ; i++){
            if(i % K == 0){
                cout << "OK" << endl;
                return 0;
            }
        }
        cout<<"NG"<<endl;
    }
    return 0;
}