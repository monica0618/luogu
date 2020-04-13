/* 小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），
它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，
它这天一共游了多少时间呢？
*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b > d)
		printf("%d %d", (c - a - 1), (d + 60 - b));
	else printf("%d %d", (c - a), (d - b));
	return 0;
}
