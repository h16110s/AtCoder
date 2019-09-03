#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>  
#include <iterator>    
#include <set>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector <long long > A(N);
    double count = 0.0;
    for(int i= 0 ; i< N ; i++){
        cin >> A[i];
        count +=  (1.0 / A[i]);
    }

    cout <<  1.0 / count  << endl;
}
