#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

double DegreeToRadian = M_PI /180.0;

double getMinitDigree(int  M){
    return ( 360.0 / 60.0 ) * M;
}

double getHourDigree(int H, int  M){
    double hour = ( 360.0 / 12 ) * H;
    double minit = ( ( 360.0 / 12 ) / 60.0 ) * M;
    return hour + minit;
}

int main(){
    int A, B , H , M ;

    cin >> A >> B >> H >> M;

    double subDigree = abs(getMinitDigree(M) - getHourDigree(H,M));
    
    subDigree *= DegreeToRadian;

    cout << setprecision(15) << sqrt( A*A + B*B - 2*A*B*cos(subDigree) ) << endl;
}