/*设某汉字由N × N的0和1的点阵图案组成。
我们依照以下规则生成压缩码。连续一组数值：
从汉字点阵图案的第一行第一个符号开始计算，按书写顺序从左到右，由上至下。第一个数表示连续有几个0，
第二个数表示接下来连续有几个1，第三个数再接下来连续有几个0，第四个数接着连续几个1，以此类推……*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	int n;
	cin >> n;
	int total = n*n;
	vector<bool> arr;
	int sum,i,k = 0;
	while(sum != total) {
		 cin >> k;
		 if(i % 2 == 0) {
			 for(int j = 0; j < k; j++) arr.push_back(0);
		 }
		 else{
			 for(int j = 0; j < k; j++) arr.push_back(1);
		 }
		 sum += k;
		 i++;
	}
	for(int i = 1; i <= total; i++) {
		if(i % n == 0) cout << arr[i-1] << endl;
		else cout << arr[i-1];
	}
	return 0;
}
