#include <bits/stdc++.h>
using namespace std;
int n, a[10];
bool b[10] = {0};
void HoanVi(int i, int n) {
	if (i > n) {
		for (int j = 0; j < n-1; j++)
			cout << a[j] << ' ';
		cout << a[n-1];
		cout << endl;
		return;
	}
	for (int j = 0; j < n; j++) {
		if (b[j] == 0) {
			a[i-1] = j+1;
			b[j] = 1;
			HoanVi(i+1, n);
			b[j] = 0;
		}
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	HoanVi(1, n);


	return 0;
}