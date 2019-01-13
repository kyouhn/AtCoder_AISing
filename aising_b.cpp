#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	int ans = 0;
	int cnt = 0;
	int cnt1 = 0;
	for (int i = 0; i < N; i++) {
		int P;
		cin >> P;
		if (P <= A) {
			ans++;
		}
		else if (P > A && P <= B) {
			cnt++;
		}
		else if (P > B) {
			cnt1++;
		}
	}
	cout << min(ans, min(cnt, cnt1)) << endl;
}