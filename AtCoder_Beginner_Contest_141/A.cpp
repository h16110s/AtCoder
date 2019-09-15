/**
 * A - Weather Prediction       C++14 (GCC 5.4.1)
 * AC
**/ 
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int main(){
    string s;
    cin >> s;

    if(s == "Sunny"){
        cout << "Cloudy" << endl;
    }
    else if(s == "Cloudy"){
        cout << "Rainy" << endl;
    }
    else if(s == "Rainy"){
        cout << "Sunny" << endl;
    }
}