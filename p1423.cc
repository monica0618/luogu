/*小玉开心的在游泳，可是她很快难过的发现，自己的力气不够，游泳好累哦。
已知小玉第一步能游2米，可是随着越来越累，力气越来越小，她接下来的每一步都只能游出上一步距离的98%。
现在小玉想知道，如果要游到距离x米的地方，她需要游多少步呢。请你编程解决这个问题。*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	double d;
	cin >> d;
	double step_length = 2;
	double swim = 0;
	int count = 0;
	while(swim <= d){
		count ++;
		swim += step_length;
		step_length *= 0.98;
	}
	cout << count;
	return 0;
}
