/*小鱼最近被要求参加一个数字游戏，要求它把看到的一串数字 ai（长度不一定，以 0 结束
），记住了然后反着念出来（表示结束的数字 0 就不要念出来了）。
这对小鱼的那点记忆力来说实在是太难了，你也不想想小鱼的整个脑袋才多大，
其中一部分还是好吃的肉！所以请你帮小鱼编程解决这个问题。*/

#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 0;
} ();

int main () {
	vector<int> nums;
	nums.reserve(100);
	int a;
	while(a != 0) {
		cin >> a;
		nums.push_back(a);
	}
	for (int i = nums.size() - 1; i >= 0; i--)
		if(nums[i] != 0) cout << nums[i] << " ";
	return 0;
}
