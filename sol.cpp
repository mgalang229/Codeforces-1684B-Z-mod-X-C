#include <bits/stdc++.h>
using namespace std;

void test_case() {
	long long a, b, c;
	cin >> a >> b >> c;
	long long x = b * c + a;
	cout << x << " " << b << " " << c << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
