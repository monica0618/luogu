/*在桌面上有一排硬币，共N枚，每一枚硬币均为正面朝上。
现在要把所有的硬币翻转成反面朝上，规则是每次可翻转任意N−1枚硬币（
正面向上的被翻转为反面向上，反之亦然）。
求一个最短的操作序列（将每次翻转N-1枚硬币成为一次操作）。*/

#include <stdio.h>
#define bool short int

void flip(bool *a, int n, int j){
  for(int i = 0; i < n; i++) {
    if(i != j){
      switch (a[i]) {
        case 1: a[i] = 0; break;
        case 0: a[i] = 1; break;
      }
    }
  }
}

int main() {
  bool coins[100];
  int n = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) coins[i] = 0;
  printf("%d\n", n);
  for(int j = 0; j < n; j++) {
    flip(coins,n,j);
    for(int k = 0; k < n; k++) printf("%d", coins[k]);
    printf("\n");
  }
  return 0;
}
