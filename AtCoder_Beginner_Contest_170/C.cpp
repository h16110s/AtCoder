#include <iostream>
using namespace std;

bool isContain( int N, int p[], int search){
    for ( int j = 0 ; j < N; j++){
        if (search == p[j]){
            return true;
        }
    }
    return false;
}

int main(){
    int X, N;

    cin >> X >> N;

    int p[N];

    for(int i = 0; i < N ; i++){
        cin >> p[i];

    }
    for ( int i = 0 ; i < 51 ; i++){
        // cout << i << endl;
        int a = X - i; 
        if(!isContain(N, p , a)){
            cout << a << endl;
            return 0;
        }
        a = X + i;
        if(!isContain(N, p , a)){
            cout << a << endl;
            return 0;
        }
    }

}