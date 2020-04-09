/*对于给定的一个长度为NNN的正整数数列Ai，
现要将其分成连续的若干段，并且每段和不超过M（可以等于M），
问最少能将其分成多少段使得满足要求。*/

#include <iostream>
#include <vector>

using namespace std;

int n,m,a;

int main(){
  cin >> n >> m;
  int a = 0;
  int sum = 0;
  int count = 1;
  int flag = 2;
  for(int i = 0; i < n; i++) {
    cin >> a;
    if(sum <= m - a) {
      flag = 0;
      sum += a;
    }
    else {
      flag = 1;
      sum = a;
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
