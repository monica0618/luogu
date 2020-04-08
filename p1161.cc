/*在一条无限长的路上，有一排无限长的路灯，编号为1,2,3,4,…。

每一盏灯只有两种可能的状态，开或者关。如果按一下某一盏灯的开关，那么这盏灯的状态将发生改变。如果原来是开，将变成关。如果原来是关，将变成开。

在刚开始的时候，所有的灯都是关的。小明每次可以进行如下的操作：

指定两个数，a,t（a为实数，t为正整数）。将编号为[a],[2×a],[3×a],…,[t×a]的灯的开关各按一次。其中[k]表示实数kkk的整数部分。

在小明进行了nnn次操作后，小明突然发现，这个时候只有一盏灯是开的，小明很想知道这盏灯的编号，可是这盏灯离小明太远了，小明看不清编号是多少。

幸好，小明还记得之前的n次操作。于是小明找到了你，你能帮他计算出这盏开着的灯的编号吗？*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


/*int main() {
  int n,t;
  double a;
  cin >> n;
  int number_of_lamps = 0;
  //int total = accumulate(t.begin(), t.end(), number_of_lamps);
  vector<int> lamps[];
  for(int j = 0; j < n; j++) {
    cin >> a >> t;
    number_of_lamps += t;
    for(int k = 1; k <= t; k++) {
      int ans = (int) (k * a);
      lamps.push_back(ans);
        }
  }

  for(int w = 0; w < number_of_lamps; w ++){
    int l = lamps[w];
    int c = count(lamps.begin(), lamps.end(), l);
    if(c % 2 == 1) cout << l << endl;
  }
  return 0;
}*/

int lamps[2000001];
int n;
double a,t;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> t;
        for(double j = 1; j <= t; j++){
          int ans = j*a;
            if(lamps[ans]==0) lamps[ans]=1;
            else lamps[ans]=0;
        }
    }
    for(int i = 1;;i ++){
        if(lamps[i] == 1){
            cout << i;
            return 0;
        }
    }
    return 0;
}
