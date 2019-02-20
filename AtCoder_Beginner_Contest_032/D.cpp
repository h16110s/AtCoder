/**
	D - ナップサック問題	C++14 (GCC 5.4.1)
**/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

typedef struct ITEM {
	long int weight;
	long int value;
} Item;


long int max(long int a, long int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int s(vector<Item>& item, int N, long int W) {

}


int main() {
	int N;
	long int W;
	long int dp[201][1010];
	cin >> N >> W;

	vector<Item> item(N);


	for (int i = 0; i < N; ++i) {
		cin >> item[i].value >> item[i].weight;
	}

	//for (int i = 0; i < N; ++i) {
	//	cout << " " << item[i].value << " " << item[i].weight << endl;
	//}

	for (int w = 0; w <= W; ++w) {
		dp[0][w] = 0;
	}


	if (N <= 30) {

	}


	for (int i = 0; i < N; i++) {
		for (long int w = 0; w <= W; w++) {
			if (w >= item[i].weight) {
				dp[i + 1][w] = max(dp[i][w - item[i].weight] + item[i].value, dp[i][w]);
			}
			else {
				dp[i + 1][w] = dp[i][w];
			}
			cout << dp[i][w] << " ";
		}
		cout << endl;
	}

	cout << dp[N][W] << endl;
}