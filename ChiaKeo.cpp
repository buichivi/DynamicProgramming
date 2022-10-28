#include <bits/stdc++.h>
using namespace std;
int n, sum, a[100];
int dp[100][10000];
int Solve(int i, int t) {
	if (i == -1)
		return sum/2-t;
	if (t < 0)
		return sum/2 - abs(t-a[i]);
	if (dp[i][t] != -1)
		return dp[i][t];
	int r = Solve(i-1, t);
	if (t >= a[i]) r = max(r, Solve(i-1, t-a[i]));
	return dp[i][t] = r;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	memset(dp, -1, sizeof dp);
	sum = 0;
	for(int i = 0; i < n; i++) 
		cin >> a[i], sum += a[i];
	int s = Solve(n-1, sum/2);
	cout << sum-s-s << endl;
	return 0;
}