/*给定一个整数，请将该数各个位上数字反转得到一个新数。
新数也应满足整数的常见形式，即除非给定的原数为零，
否则反转后得到的新数的最高位数字不应为零*/

#include "bits/stdc++.h"
using namespace std;

int main() {
  char a;
  int sum = 0;
  int weight = 1;
  string v;
  v.reserve(10);
  cin >> a;
  if(a == '-'){
    getline(cin,v);
    for(int i = 0; i < v.size(); i++){
      int in = v[i] - '0';
      sum -= in * weight;
      weight *= 10;
    }
  }
  else {
    sum = a - '0';
    weight *= 10;
    getline(cin,v);
    for(int i = 0; i < v.size(); i++){
      int in = v[i] - '0';
      sum += in * weight;
      weight *= 10;
    }
  }
  cout << sum << endl;
  return 0;
}
