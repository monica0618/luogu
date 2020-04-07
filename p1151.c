/*对于一个五位数a1a2a3a4a5，可将其拆分为三个子数：
现在给定一个正整数K，要求你编程求出10000到30000之间所有满足下述条件的五位数，
条件是这些五位数的三个子数sub1,sub2,sub3都可被K整除。*/
#include <stdio.h>
#include <stdlib.h>
#define bool short int
#define TRUE 1
#define FALSE 0

bool is_multiple(int n, int k) {
  return (n % k == 0) ? TRUE : FALSE;
}

int find_abc(int k, int *abc){
  int number = 1;
  for(int i = 100; i < 100 + k; i++){
    if(is_multiple(i,k)) abc[0] = i;
    }
  int value = abc[0] + k;
  while(value <= 300){
    abc[number] = value;
    number ++;
    value += k;
  }
  return number;
}

int find_abcde(int k, int number, int *abc, int *abcde) {
  int a,b,c,d,e,bc,cd;
  int x = 0;
  for(int i = 0; i < number; i ++) {
    a = abc[i]/100;
    b = abc[i]/10 - 10*a;
    c = abc[i] % 10;
    bc = 10*b + c;
    for(int j = 0; j < 10; j++) {
      if((10 * bc + j) % k == 0){
        d = j;
        cd = 10 * c + d;
        for(int l = 0; l < 10; l++){
          if((10 * cd + l) % k == 0){
            e = l;
            int ans = a*10000 + b*1000 + c*100 + d*10 + e;
            if(ans <= 30000){
              abcde[x] = ans;
              x++;
            }
          }
        }
      }
    }
  }
  return x;
}

int main () {
  int k = 0;
  scanf("%d", &k);
  int number_of_abc = 200/k +1;
  int number_of_abcde = 20000/k;
  int *abc = (int *)malloc(sizeof(int)*number_of_abc);
  int *abcde = (int *)malloc(sizeof(int)*number_of_abcde);
  int number = find_abc(k, abc);
  int x = find_abcde(k,number,abc,abcde);
  if(x > 0){
    for(int i = 0; i < x; i++) printf("%d\n",abcde[i]);
  }
  else printf("No");
  free(abc);
  free(abcde);
  return 0;
}
