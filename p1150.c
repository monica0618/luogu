/*Peter 有 n 根烟，他每吸完一根烟就把烟蒂保存起来，k(k>1)个烟蒂可以换一个新的烟，那么 Peter 最终能吸到多少根烟呢？*/
#include <stdio.h>

int sum(int n, int k) {
  int sum = n;
  int used = n;
  while(used >= k){
    used -= k;
    sum ++;
    used ++;
  }
  return sum;
}

int main () {
   int n,k = 0;
   scanf("%d %d", &n, &k);
   int ans = 0;
   ans = sum(n,k);
   printf("%d\n", ans);
   return 0;
}
