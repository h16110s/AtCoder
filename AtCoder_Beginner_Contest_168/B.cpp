#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int K;
    cin >> K;
    string S;
    cin >> S;

    if((int)S.size() > K){
        cout << S.substr(0,K)<< "..." << endl;
    }
    else{
        cout << S << endl;
    }

}