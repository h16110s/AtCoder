#include <iostream>
#include <vector>
using namespace std;
std::vector<int> list;
int f(int n);

int check(int num){
    for(int i =0; i < list.size(); i++){
        if(list[i] == num){
            return list.size() + 1;
        }
    }
    return -1;
}

int f(int n){
    int static count = 1;
    static int max = 0;
    count++;
    int next = -1;
    // 奇数
    if(n % 2){
        next = 3*n + 1;
    }
    // 偶数
    else{
        next = n/2;
    }

    int c = check(next);
    if(c != -1){
        return c;
    }
    else {
        list.push_back(next);
        return f(next);
    }
}

int main(){
    int a = -1;
    cin >> a;
    list.push_back(a);
    cout << f(a) << endl;
    return 0;
}