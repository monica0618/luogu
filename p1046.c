#include <stdio.h>

int main() {
  int hoa[10];
  int hot = 0;
  for(int i = 0; i < 10; i++) scanf("%d ", &hoa[i]);
  scanf("%d", &hot);
  int count = 0;
  for(int j = 0; j < 10; j++) {
    if(hoa[j] <= hot + 30) count++;
  }
  printf("%d", count);
  return 0;
}
