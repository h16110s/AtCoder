/**
  B - ATCoder	C++14 (GCC 5.4.1)
	Accepted
**/

#include <iostream>
#include <vector>
using namespace std;

 int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main(){
  char S[11];
  cin >> S;
  int c = 0;
  int max = 0;
  for(int i = 0 ; i <= 10 ; i++){
      if(S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
        c++;
      }
      else{
          max = Max(c,max);
          c = 0;
      }
  }
  cout << max << endl;
}