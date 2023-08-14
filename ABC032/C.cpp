/**
	C - 列 	C++14 (GCC 5.4.1)
	Accepted
**/

#include <iostream>
#include <vector>
using namespace std;


long int max(long int a, long int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	unsigned long int N;
	unsigned long int K;
	bool grater = true;
	bool zero = false;

	cin >> N >> K;
	vector<unsigned long int> s(N);

	for (unsigned long int i = 0; i < N; i++) {
		cin >> s[i];
		if (s[i] <= K) {
			grater = false;
		}
		if (s[i] == 0) {
			zero = true;
		}
	}
	if (grater) {
		cout << 0 << endl;
		exit(0);
	}
	if(zero) {
		cout << N << endl;
		exit(0);
	}

	long int ans = 0;
	long int right , left;
	for (left = 0; left < N - ans; left++) {
		long int count = 0;
		long long x = 1;
		for (right = left; right < N; right++) {
			if (x * s[right] > K) {
				break;
			}
			x *= s[right];
			count++;
		}
		//cout << "x:" << x << endl;
		ans = max(ans, count);
	}
	cout << ans << endl;
}