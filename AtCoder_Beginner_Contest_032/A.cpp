/**A - 高橋君と青木君の好きな数	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	long int n;
	cin >> a;
	cin >> b;
	cin >> n;

	int count = n;
	while (true) {
		if (count % a == 0 && count % b == 0) {
			break;
		}
		count++;
	}
	cout << count << endl;
	return 0;
}