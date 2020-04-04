/*明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，
他先用计算机生成了N个1到1000之间的随机整数(N≤100)，
对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。
然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。
请你协助明明完成“去重”与“排序”的工作。*/

#include <stdio.h>

/*int delete(int *a, int n) {
  int count = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i + 1; j < n; j++){
      if(a[j] == a[i]) {
        a[j] = a[n-1];
        count ++;
        n--;
      }
    }
  }
  return count;
}*/

void sort(int *a, int n){
  for(int i = 0; i < n-1; i ++){
    int ith = i;
    for(int j = i + 1; j <n; j++){
      if(a[j] < a[ith]) ith = j;
    }
    int t = a[i];
    a[i] = a[ith];
    a[ith] = t;
  }
}

int build_new(int *a, int *b, int n){
  int j = 0;
  for(int i = 0; i < n; i++){
    if(a[i+1] != a[i]) {
      b[j]= a[i];
      j++;
    }
  }
  return j;
}

int main() {
  int n = 0;
  int a[100];
  int b[100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++) scanf("%d", &a[i]);
  sort(a, n);
  int n_now = build_new(a,b,n);
  printf("%d\n", n_now);
  for(int j = 0; j < n_now; j++) printf("%d ", b[j]);
  return 0;
}
