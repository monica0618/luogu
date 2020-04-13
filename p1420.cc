/*输入 nnn 个正整数，要求输出最长的连号的长度。

连号指从小到大连续自然数。
*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	int n;
	cin >> n;
	int max_count = 0;
	int a,b;
	cin >> a;
	int count = 1;
	for (int i = 1; i < n; i++) {
		cin >> b;
		if(b == a + 1){
			count ++;
		}
		else if (count > max_count) {
			max_count = count;
			count = 1;
		}
		a = b;
	}
	cout << max_count;
	return 0;
}
