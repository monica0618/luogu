/*在你的养牛场，所有的奶牛都养在一排呈直线的牛栏中。一共有 n 头奶牛，
其中第 i 头牛在直线上所处的位置可以用一个整数坐标 pi(0≤pi≤10^8)来表示。
在无聊的日子里，奶牛们常常在自己的牛栏里与其它奶牛交流一些八卦新闻。
每头奶牛发出的声音响度是一样的，而由于声波的能量衰减，
某头奶牛发出的声音只能被与它距离不超过 d(0≤d≤10^4) 的奶牛所听到，
这样这对奶牛就称为可以相互交流的。现在给出所有奶牛的位置和声音所能传播的最远距离 d ，
请你编个程序来计算你的养牛场里究竟有多少对可以相互交流的奶牛。*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,d;

int main() {
  cin >> n >> d;
  vector<int> cows(n);
  for(int i = 0; i < n; i++) cin >> cows[i];
  sort(cows.begin(),cows.end());
  int count = 0;
  int flag = 0;
  for(int i = 0; i < n - 1; i++) {
    flag = 1;
    for(int j = i+1; flag == 1; j++){
      if(j >= n) flag = 0;
      else if(cows[j]-cows[i] <= d) count ++;
      else if(cows[j]-cows[i] > d) flag = 0;
    }
  }
  cout << count << endl;
  return 0;
}
