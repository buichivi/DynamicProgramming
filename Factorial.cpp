#include <iostream>
#include <vector>
using namespace std;
int n;
vector<long long int> MEMO(1001, -1);
const int MOD = 1e9+7;
long long int GiaiThua(int i) {
	if (i <= 1)
		return 1;
	if (MEMO[i] != -1)
		return MEMO[i]%MOD;
	return MEMO[i] = (GiaiThua(i-1) * i)%MOD;
}


int main() {
	cin >> n;
	cout << GiaiThua(n);

	return 0;
}