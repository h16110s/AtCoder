#include <iostream>
using namespace std;

void sort(int N, int value[5]){
    for(int i = 0 ; i < N; i++){
        for(int j = i + 1 ; j < N; j++){
            if(value[i] > value[j]){
                break;
            }
            else{
                int tmp = value[i];
                value[i] = value[j];
                value[j] = tmp;
            }
        }
    }
}

int main(){
    int a[5] = {3,5,2,4,1};
    sort(5,a);
    for(int i = 0; i < 5; i++){
        cout << a[i] <<" ";
    }
}