/*请统计某个给定范围[L,R]的所有整数中，数字 2 出现的次数。

比如给定范围[2,22]，数字2在数 2中出现了 1 次，在数12 中出现 1 次，在数 20 中出现 1次，在数 21 中出现 1 次，在数 22 中出现 2次，
所以数字2 22 在该范围内一共出现了 6次。
*/

#include <iostream>
#include <vector>

using namespace std;

int l,r;

int main() {
  cin >> l >> r;
  int count = 0;
  for(int i = l; i <= r; i++) {
    int value = i;
    while(value != 0){
      if(value%10 == 2) count++;
      value /= 10;
    }
  }
  cout << count << endl;
  return 0;
}
