#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int> h){
    for(int i = 0; i< h.size(); i++){
        cout << h[i] << " ";;
    }
    cout << endl;
}

void grow(vector<int>& h, int l, int r){
    if(l > r){
        cout << "その育て方はできません"<< l << r <<endl;
        exit(0);
    }
    
    for(int i = l; i <= r; i++){
        if(h[i] == 0) {
            cout << "それ以上"<<i<<"は育てられません成長エラー" <<endl;
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
        // 水やり選択
        for (int i = 0 ; i < N ; i++){
            // 前半の０
            if(h[i] == 0&& !choice){
                continue;
            }
            // 0が途中で現れた時
            else if(h[i] == 0 && choice){
                r = i -1;
                break;
            }
            // はじめの数字l
            else if(h[i] != 0 && !choice){
                l = i;
                choice = true;
            }
            // 0じゃなくてはじめが決まってる時は終わりを随時更新
            //  h[i] != 0 && choice 
            else {
                r = i;
            }
        }
        // 成長
        grow(h,l,r);
        // 表示（提出時はいらない）
        // disp(h);
        // ここまでで１回の水やり
        count++;
    }
    cout << count <<endl;
    return 0;
}