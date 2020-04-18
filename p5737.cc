/*输入 x,y(1582≤x<y≤3000)
输出 [x,y] 区间中闰年个数，并在下一行输出所有闰年年份数字，使用空格隔开。*/

#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 0;
} ();

bool is_luna (int y){
	if(y % 4 == 0){
		if(y % 100 == 0){
			if(y % 400 ==0) return true;
		}
		else return true;
	}
	return false;
}

int main () {
	int start, end;
	int count = 0;
	cin >> start >> end;
	vector<int> luna_year;
	int n = (end - start) / 4 + 1;
	luna_year.reserve(n);
	int first = start;
	for(int i = start; i < start + 4; i++){
		if(i % 4 == 0) first = i;
	}
	for(int i = first; i <= end; i += 4){
		if(is_luna(i)) {
			count ++;
			luna_year.push_back(i);
		}
	}
	cout << count << endl;
	for( int i = 0; i < luna_year.size(); i++) cout << luna_year[i] << " ";
	return 0;
}
