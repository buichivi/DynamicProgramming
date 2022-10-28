#include <iostream>
#include <vector>
using namespace std;
int n, W;
int w[2000], v[2000];
vector< vector<int> > MEMO(2000, vector<int>(2000, -1));
int D(int i, int weight) {   /// D(5, 7) -> MEMO[5] = max(D(4, 7-w[4](= 6)) + v[5](=20), D(4, 7)
	if (i == -1)
		return 0;
	if (weight == 0) 
		return 0;
	if (MEMO[i][weight] != -1)
		return MEMO[i][weight];
	if (w[i] > weight)
		return MEMO[i][weight] = D(i-1, weight);
	// cout << "D(" << i << ", " << weight << ")" << " = " << MEMO[i][weight] << endl;
	return MEMO[i][weight] = max(D(i-1, weight-w[i]) + v[i], D(i-1, weight));
}
int main() {
	freopen("input.txt", "r", stdin);
	cin >> W >> n;
	for (int i = 0; i < n; i++) 
		cin >> w[i];
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cout << D(n-1, W);
	return 0;
}