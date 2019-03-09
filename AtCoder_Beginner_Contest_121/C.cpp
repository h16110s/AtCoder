/**
    C - Energy Drink Collector     C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

typedef struct DRINK {
  long A;  
  long B;
} Drink;

bool operator<(const Drink& left, const Drink& right) {
        return left.A < right.A;
}

int main(){
    long long N, M;
    cin >> N >> M;
    vector<Drink> D(N);
    for(int i = 0 ; i < N; i++){
        long tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        D[i].A = tmp1;
        D[i].B = tmp2;
    }
    sort(D.begin(), D.end());
    long money = 0;
    long count = M;
    for(int i = 0 ; i < N; i++){
        if(count >= D[i].B){
            money += D[i].B * D[i].A;
            count -= D[i].B;
        }
        else{
            money += count * D[i].A;
            break;
        }
    }
    cout << money <<endl;
}