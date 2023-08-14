/**
    B - K-th Common Divisor     C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, b, K;
    cin >> a >> b >> K;
    vector<int> t;
    for(int i = 1; i <= b; i++){
        if(a % i == 0 && b % i == 0){
            t.push_back(i);
        }
    }
    cout << t[ t.size() - K ] << endl;
}