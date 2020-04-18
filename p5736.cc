/*输入 n(n≤100) 个不大于 100000 的整数。
要求全部储存在数组中，去除掉不是质数的数字，依次输出剩余的质数。*/

#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 0;
} ();

bool is_prime(int n) {
	int i = 2;
	while(i <= trunc(sqrt(n)))
		if(n % i == 0) return false; else i++;
	return true;
}

int main () {
	int n,a;
	cin >> n;
	vector<int> arr;
	arr.reserve(n);
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(is_prime(a) && a != 1) arr.push_back(a);
	}
	for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
	return 0;
}
