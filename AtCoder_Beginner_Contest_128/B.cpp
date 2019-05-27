/**
    B   -   Guidebook    	C++14 (GCC 5.4.1)
    Accepted
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef struct S{
    int num;
    string name;
    int i;
} s;

int main(){
    int N;
    cin >> N;

    vector<s> shop(N);

    for(int i = 0 ; i < N ; i++){
        string s;
        int p;
        cin >> s>> p;
        shop[i].num = i;
        shop[i].name = s;
        shop[i].i = p;
        // name[shop[i]] = i;
    }

    // sort(shop.begin(), shop.end());
    sort(shop.begin(), shop.end(), 
     [](const s& x, const s& y) { if(x.name != y.name) return x.name < y.name; else return x.i > y.i;});

    for(int i = 0 ; i < N ; i++){
        cout << shop[i].num + 1 << endl;
    }

    return 0;
}