/**
    	A - White Cells	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    int h,w;
    cin >> h >> w;
    cout << (H*W) - (h*W) - (w*H) + (h*w)<< endl;
}