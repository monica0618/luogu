/*现有n个正整数，n≤10000，要求出这n个正整数中的第k个最小整数
（相同大小的整数只计算一次），k≤1000，正整数均小于30000。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sort(int *a, int *b, int n, int m){
  int k = 0;
  for(int i = 0; i < n - 1; i ++){
    int ith = i;
    for(int j = i + 1; j < n; j++){
      if(a[j] < a[ith]) ith = j;
    }
    int t = a[i];
    a[i] = a[ith];
    a[ith] = t;
    if(ith == 0){
      b[0] = a[0];
      k++;
    }
    else if((a[i] != a[i-1]) && (k < m)) {
      b[k] = a[i];
      k++;
    }
  }
}


int main() {
  int n,m = 0;
  scanf("%d %d", &n, &m);
  int *a = (int*)malloc(sizeof(int)*n);
  int *b = (int*)malloc(sizeof(int)*m);
  memset(b,0,sizeof(int));
  for(int k = 0; k < n; k++) scanf("%d", &a[k]);
  sort(a,b,n,m);
  if(b[m-1] == 0) printf("NO RESULT");
  else printf("%d", b[m-1]);
  free(a);
  free(b);
  return 0;
}
