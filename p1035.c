/*已知：Sn=1+1/2+1/3+…+1/n。
显然对于任意一个整数 k，当 n 足够大的时候，S_n>k。
现给出一个整数 k，要求计算出一个最小的 n，使得 S_n>k。*/

#include <stdio.h>
#include <math.h>

/*this part doesn't work:
double sof_small(int n) {
  double sum = 0;
  for(int i = 1; i < n + 1; i++) sum = sum + 1.0/i;
  return sum;
}

int find_min_n(int k) {
  int flag = 0;
  for(int i = 1; flag == 0; i++) {
    if(sof_small(i) > k) {
      return i;
      flag = 1;
    }
  }
}*/

int main() {
  int k,n = 0;
  double sum = 0;
  scanf("%d", &k);
  for(sum = 0; sum < k; n++, sum += 1.0/n);
  printf("%d\n", n);
  return 0;
}
