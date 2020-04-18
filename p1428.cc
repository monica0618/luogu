
#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 0;
} ();

int main () {
	int n,a;
	cin >> n;
	vector<int> cute(n);
	for(int i = 0; i < n; i++) {
		cin >> cute[i];
	}
	cout << 0 << " ";
	int count = 0;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(cute[j] < cute[i]) count++;
		}
		cout << count << " ";
		count = 0;
	}
	return 0;
}
