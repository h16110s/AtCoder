/**
  A - Double Helix	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
using namespace std;

int main(){
  char b;
  cin >> b;

  switch(b){
    case 'A':
      cout << 'T' << endl;
      break;
    case 'G':
      cout << 'C' << endl;
      break;
    case 'C':
      cout << 'G' << endl;
      break;
    case 'T':
      cout << 'A' << endl;
      break;
  }
}