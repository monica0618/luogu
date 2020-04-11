/*输入一个偶数 N(N<=10000)，验证4~N所有偶数是否符合哥德巴赫猜想：
任一大于 2 的偶数都可写成两个质数之和。如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。
例如 10，10=3+7=5+5，则 10=5+5 是错误答案。*/

#include <iostream>
#include <cmath>

using namespace std;

int n,i,j;

bool is_prime(int n){
  int i = 2;
  while(i <= trunc(sqrt(n)))
    if (n % i == 0) return false; else i++;
    return true;
}

int main() {
  cin >> n;
  for(int i = 4; i <= n; i+=2) {
    int flag = 1;
    for(int j = 2; flag == 1; j++){
      if(is_prime(j) && is_prime(i-j)) {
        flag = 0;
        cout << i << "=" << j << "+" << (i-j) << endl;
      }
    }
  }

  return 0;
}
