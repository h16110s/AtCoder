/**
    A	Darker and Darker    	C++14 (GCC 5.4.1)
    Accept
**/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <algorithm>    // std::copy
#include <iterator>     // std::back_inserter
#include <set>
using namespace std;
 
int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> A(H, vector<char>(W,0));
    vector<vector<char>> An(H, vector<char>(W,0));
    vector< pair<int, int> > black;
    int count = 0;
    for(int i = 0 ; i < H  ; i++){
        for (int j = 0; j < W ; j++){
            cin >> A[i][j];
            An[i][j] = A[i][j];
            if(A[i][j] == '#') {
                black.push_back(make_pair(i,j));
                count++;
            }
        }
    }
    // for(int i = 0 ; i < H  ; i++){
    //     for (int j = 0; j < W ; j++){
    //         cout << A[i][j];
    //     }
    //     cout << endl;
    // }
    
    int ans = 0;
    int start = 0;
    while(1){
        // cout << endl;
        // int count = 0;
        // for(int i = 0 ; i < H  ; i++){
        //     for (int j = 0; j < W  ; j++){
        //         // cout << A[i][j] << " ";
        //         if(A[i][j] == '#')  count++;
        //     }
        //     // cout << endl;
        // }
        if(count == H * W){break;}
 
        int m = black.size();
        for(int i = start ; i < m; i++){
            // black.erase(black.begin());
 
            // if(A[black[i].first][black[i].second] == '#'){
                if(black[i].first != 0 && A[black[i].first-1][black[i].second] != '#'){
                    A[black[i].first-1][black[i].second] = '#';
                    count++;
                    black.push_back(make_pair(black[i].first-1,black[i].second));
                }
                if(black[i].second != 0 && A[black[i].first][black[i].second-1] != '#'){ 
                    A[black[i].first][black[i].second-1] = '#';
                    count++;
                    black.push_back(make_pair(black[i].first,black[i].second-1));
                }
                if(black[i].first != H - 1 && A[black[i].first+1][black[i].second] != '#'){ 
                    A[black[i].first+1][black[i].second] = '#';
                    count++;
                    black.push_back(make_pair(black[i].first+1,black[i].second));
                }
                if(black[i].second !=  W - 1 && A[black[i].first][black[i].second+1] != '#'){
                    A[black[i].first][black[i].second+1] = '#';
                    count++;
                    black.push_back(make_pair(black[i].first,black[i].second+1));
                }
 
            // }
        }
        start = m;
        // copy(An.begin(), An.end(), A.begin() );
        ans++;
    }
    cout << ans << endl;
    
 
    return 0;
}