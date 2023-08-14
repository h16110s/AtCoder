#include <iostream>
using namespace std;

int main(){
    char alpha;

    cin >> alpha;

    if(alpha >= 'a' && alpha <= 'z'){
        cout << 'a' << endl;
    }
    else if(alpha >= 'A' && alpha <= 'Z'){
        cout << 'A' << endl;
    }
    return 0;
}
