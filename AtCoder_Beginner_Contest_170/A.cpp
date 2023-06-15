#include <iostream>
using namespace std;

int main(){
    int x[5] = {0};

    for(int i = 0; i < 5; i++){
        cin >> x[i];
    }

    for(int i = 0; i < 5; i++){
        if(x[i] == 0){
            cout << i + 1 << endl;
            break;
        }
    }
}