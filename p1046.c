/*陶陶家的院子里有一棵苹果树，每到秋天树上就会结出 10 个苹果。
苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个 30 厘米高的板凳，
当她不能直接用手摘到苹果的时候，就会踩到板凳上再试试。
现在已知 10个苹果到地面的高度，以及陶陶把手伸直的时候能够达到的最大高度，
请帮陶陶算一下她能够摘到的苹果的数目。假设她碰到苹果，苹果就会掉下来。
*/
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
