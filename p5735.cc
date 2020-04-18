/*给出平面坐标上不在一条直线上三个点坐标 (x1,y1),(x2,y2),(x3,y3)，
坐标值是实数，且的绝对值不超过 100.00，求围成的三角形周长。保留两位小数。*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	double x1,x2,x3,y1,y2,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double sum = sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1)) + sqrt((x3-x1)*(x3-x1) +(y3-y1)*(y3-y1)) + sqrt((x2-x3)*(x2-x3) +(y2-y3)*(y2-y3));
	cout << fixed << setprecision(2) << sum;
	return 0;
}
