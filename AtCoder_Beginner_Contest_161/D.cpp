#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
int main(){
    long long K;
    cin >> K;

    
    long long count =0 ;
    int i;
    for(i = 1 ; count <= K ; i++){
        string s = to_string(i);
        bool m = true;
        if (s.size() > 1){
            for(int j = 1; j < s.size() - 1; j++){
                if(abs(s[j] - s[j+1]) == 1){
                    continue;
                }
                else{
                    m = false;
                    break;
                }
            }
        }
        if(m){
            cout << s << endl;
            count++;
        }
    }
    cout << i << endl;
}