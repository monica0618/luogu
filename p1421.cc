/*班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是1元9角，
而班主任给小玉的钱是a元b角，小玉想知道，她最多能买多少只签字笔呢。
*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	int a, b;
	cin >> a >> b;
	cout << (a * 10 + b) / 19;
	return 0;
}
