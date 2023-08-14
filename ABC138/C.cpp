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


    double count = 0;
    vector <long long > v(N);
    cin >> v[0];
    

    for (int i =1 ; i < N ; i++){
        cin >> v[i];
    }


    sort(v.begin(), v.end());
    count = v[0];
    for (int i =1 ; i < N ; i++){
        count = (count + v[i]) / 2;
    }

    cout << count << endl;


}
