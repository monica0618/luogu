/*有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，
假设从周 x(1≤x≤7) 开始算起，
过了 n(n≤10^6) 天以后，
小鱼一共累计游泳了多少公里呢？*/

#include "bits/stdc++.h"
using namespace std;

int x,n;

int main () {
	cin >> x >> n;
	int d = 0;
	for(int i = 0; i < n; i ++){
		if((x + i) % 7 == 6 ||(x + i) % 7 == 0) d += 0;
		else d += 250;
	}
	cout << d;
	return 0;
}
