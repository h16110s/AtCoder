/**
   	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    
    vector<int> p(n);
    int count = 0;
 
   
    for( int i = 0; i < n ;i++){
        cin >> p[i];
    }
 
    for(int i = 1; i < n-1  ;i++ ){
        if( p[i-1] < p[i] && p[i] < p[i+1]){
            count++;
        }
        else if( p[i-1] > p[i] && p[i] > p[i+1]){
            count++;
        }
    }
    cout << count << endl;
 
    return 0;
}
/**
   	C++14 (GCC 5.4.1)
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    vector<int> p(n);
    int count = 0;

   
    for( int i = 0; i < n ;i++){
        cin >> p[i];
    }

    for(int i = 1; i < n-1  ;i++ ){
        if( p[i-1] < p[i] && p[i] < p[i+1]){
            count++;
        }
        else if( p[i-1] > p[i] && p[i] > p[i+1]){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
提出情報
