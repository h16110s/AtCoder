/**
    C   -   Five Transportations	C++14 (Clang 3.8.0)
	Accepted
**/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    vector<long long> num(5);
    long long N;
    long long time = 0;
    cin >> N;
    for(int i = 0 ; i < 5 ; i++){
        cin >> num[i];
    }
    long long min = *std::min_element(num.begin(), num.end());
    if (min >= N){cout << 5 << endl; return 0;}
    time += N / min;
    if (N % min > 0) time++;
    time += 4;
    cout << time << endl;
}