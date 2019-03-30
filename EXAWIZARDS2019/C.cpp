/**
    C - Snuke the Wizard	C++14 (GCC 5.4.1)
	TLE
**/

#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

typedef struct ROOM {
    char name;
    int count;
} Room;

int main(){
    long long  N, Q; 
    cin >> N >> Q;
    vector<Room> room(N+2);
    vector<Room> his(N+2);
    room[0].count = 0;
    room[0].name = ' ';
    room[N+1].count = 0;
    room[N+1].name = ' ';
    string s;
    cin >> s;

    for(int i = 1 ; i < N + 1 ; i++){
        room[i].name = s[i-1];
        room[i].count = 1;
        // cout << room[i].name;
    }
    // std::copy(room.begin(), room.end(), his.begin()); 


    for(int i = 0; i < Q ; i++){
        char t;
        char d;
        cin >> t >> d;
        if(d == 'L'){
            for(int j = 1; j < N+1 ; j++){
                if(room[j].name == t){
                    if(room[j].count > 0){
                        room[j-1].count += room[j].count;
                        room[j].count = 0;
                    }
                }
            }
        }
        else if(d == 'R'){
            for(int j =  N ; j > 0 ; j--){
                if(room[j].name == t){
                    if(room[j].count > 0){
                        room[j+1].count += room[j].count;
                        room[j].count = 0;
                    }
                }
            }
        }
        // for(int i = 1 ; i < N + 1 ; i++){
        //     cout << room[i].count << " ";
        // }
        // cout << endl;  
        // std::copy(room.begin(), room.end(), his.begin());
    }

    // int ans = 0;
    // for(int i = 1 ; i < N + 1 ; i++){
    //     ans += room[i].count;
    //     // cout << room[i].count << " ";
    // }
    cout << N - room[0].count - room[N+1].count << endl;
}