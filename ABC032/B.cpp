/**	
	B - 高橋君とパスワード	C++14 (GCC 5.4.1)
	Accepted
**/
#include <iostream>
#include <string>
#include <set>
using namespace std;

int charSize(char *s) {
	for (int i = 0; i <= 300; i++) {
		if (s[i] == NULL) {
			return i;
		}
	}
}

int pass() {
	set<string> list;
	char s[301];
	int k = 0;
	cin >> s;
	cin >> k;
	int size = charSize(s);

	if (size < k) {
		return 0;
	}

	for (int i = 0; i < size; i++) {
		string t = "";
		for (int j = i; j < i + k; j++) {
			if (s[j] == NULL) break;
			t += s[j];
		}
		if (t.size() == k) {
			list.insert(t);
		}
	}
	return  list.size();;
}

int main() {
	cout << pass() << endl;
}