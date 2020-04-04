/*已知正整数n是两个不同的质数的乘积，试求出两者中较大的那个质数。*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int x) {
  bool is_prime = true;
  for(int i = 2; i <= trunc(sqrt(x)); i++) {
    if(x%i == 0) is_prime = false;
  }
  return is_prime;
}

int main() {
  long a;
  scanf("%ld", &a);
  for(long i = 2; i <= trunc(sqrt(a)); i++) {
    if(is_prime(i)){
      if(a%i == 0) printf("%ld",a/i);
    }
  }
  return 0;
}
