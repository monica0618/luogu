/*设某汉字由N X N的0和1的点阵图案组成，如下图。我们依照以下规则生成压缩码。
连续一组数值：从汉字点阵图案的第一行第一个符号开始计算，按书写顺序从上到下，由左到右。第一个数表示连续有几个0，
第二个数表示接下来连续有几个1，第三个数再接下来连续有几个0，第四个数接着连续几个1，以此类推*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	// freopen("p1320.in", "r", stdin);
	vector<int> arr;
	string fline,oline;
	cin >> fline;
	for(int i = 0; i < fline.length(); i++) {
		int a = fline[i] - '0';
		arr.push_back(a);
	}
	for(int i = 1; i < fline.length(); i++) {
		cin >> oline;
		for(int j = 0; j < fline.length(); j++) {
			int a = oline[j] - '0';
			arr.push_back(a);
		}
		oline.clear();
	}
	// for(int a:arr) cout << a;
	cout << fline.length() << " ";
	int count = 0;
	if (arr[0] == 1) cout << 0 << " ";
	for(int i = 1; i < arr.size(); i++) {
		count ++;
		if (i == arr.size() - 1) cout << count+1;
		else if(arr[i] != arr[i-1]) {
			cout << count << " ";
			count = 0;
		}
	}
	// fclose(stdin);
	return 0;
}
