#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int> h){
    for(int i = 0; i< h.size(); i++){
        cout << h[i] << " ";
    }
    cout << endl;
}

void grow(vector<int>& h, int l, int r){
    if(l > r){
        exit(0);
    }    
    for(int i = l; i <= r; i++){
        if(h[i] == 0) {
            disp(h);
            exit(0);
        }
        h[i]--;
    }
}

bool check(vector<int> h){
    for(int i = 0;i < h.size(); i++){
        if(h[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    std::vector<int> h;
    cin >> N;
    for(int i = 0; i< N; i++){
        int tmp;
        cin >>  tmp;
        h.push_back(tmp);
    }

    int count =0;;
    while(!check(h)){
        int l = 0;
        int r = N -1;
        bool choice = false;
        for (int i = 0 ; i < N ; i++){
            if(h[i] == 0&& !choice){
                continue;
            }
            else if(h[i] == 0 && choice){
                r = i -1;
                break;
            }
            else if(h[i] != 0 && !choice){
                l = i;
                choice = true;
            }
            else {
                r = i;
            }
        }
        grow(h,l,r);
        // disp(h);
        count++;
    }
    cout << count <<endl;
    return 0;
}