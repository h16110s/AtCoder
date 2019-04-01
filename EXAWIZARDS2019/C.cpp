/**
    C - Snuke the Wizard	C++14 (GCC 5.4.1)
	Accept
**/

#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;


int main(){
    long long  N, Q; 
    cin >> N >> Q;
    vector<pair<char, int>> q;
    string s;
    cin >> s;

    for(int i = 0; i < Q ; i++){
        char t;
        char d;
        cin >> t >> d;
        int num = d == 'R' ? 1 : -1;    // Rなら1,Lなら-1 として取得
        q.push_back(make_pair(t, num));
    }

    // ＝二分法＝

    // 左端と右端を定義
    int L = -1, R = N;
    // 左側の特定
    // R - L > 1 右端と左端が隣合わない時
    while( R - L > 1){
        // 中心の計算
        int M = (L+R)/2;
        int center = M;
        // 左端のフラグ
        bool leftFlag = false;
        // 命令の回数だけ繰り返し
        for(int i = 0; i < Q ; i++){
            // 中心の文字列　== 命令の文字列　ならば
            if( s[center]== q[i].first){
                // 中心をL,Rへ動かす
                center += q[i].second;
            }
            // 中心が右端にたどり着いた時は中心から右はnになるので次
            if(center == N){
                break;
            }
            // 中心が左端にたどり着いた時は中心から左は-1になるので次
            else if(center == -1){
                leftFlag = true;
                break;
            }
        }
        // 中心が左端に行くことがわかったら左を真ん中へ
        if (leftFlag)  L = M;
        // それ以外は右を動かす
        else  R = M;
    }
    // 左の位置
    int Left = L;

    // 右側の特定
    // R - L > 1 右端と左端が隣合わない時
    L = -1, R = N;
    while( R - L > 1){
        // 中心の計算
        int M = (L+R)/2;
        int center = M;
        // 右端のフラグ
        bool rightFlag = false;
        // 命令の回数だけ繰り返し
        for(int i = 0; i < Q ; i++){
            // 中心の文字列　== 命令の文字列　ならば
            if( s[center] == q[i].first){
                // 中心をL,Rへ動かす
                center += q[i].second;
            }
            // 中心が左端にたどり着いた時は中心から左は-1になるので次
            if(center == -1){
                break;
            }
            // 中心が右端にたどり着いた時は中心から右はnになるので次
            else if(center == N){
                rightFlag = true;
                break;
            }
        }
        // 中心が右端に行くことがわかったら右を真ん中へ
        if (rightFlag)  R = M;
        // それ以外は左を動かす
        else  L = M;
    }
    // 右の位置
    int Right = R;
    //左と右が重なっているもしくは入れ替わった時　-> 0
    if ( Left >= Right ) cout << 0 << endl;
    // そうじゃなければ右-左をした数が残りの数
    else cout << Right - Left -1 << endl;
}