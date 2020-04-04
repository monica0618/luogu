/*在一个旧式的火车站旁边有一座桥，其桥面可以绕河中心的桥墩水平旋转。
一个车站的职工发现桥的长度最多能容纳两节车厢，如果将桥旋转180度，
则可以把相邻两节车厢的位置交换，用这种方法可以重新排列车厢的顺序。
于是他就负责用这座桥将进站的车厢按车厢号从小到大排列。
他退休后，火车站决定将这一工作自动化，其中一项重要的工作是编一个程序，
输入初始的车厢顺序，计算最少用多少步就能将车厢排序。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool short int
#define TRUE 1
#define FALSE 0

int bubble_sort(int *a, int n) {
  int count = 0;
  bool flag = TRUE;
  while (flag) {
    flag = FALSE;
    for (int i = 0; i < n-1; ++i) {
      if (a[i] > a[i + 1]) {
        count++;
        flag = TRUE;
        int t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
      }
    }
  }
  return count;
}

int main() {
  int n = 0;
  scanf("%d", &n);
  int *a = (int*)malloc(sizeof(int)*n);
  //memset(a, 0, sizeof(int)*n);
  for(int i = 0; i < n; i++) scanf("%d", &a[i]);
  printf("%d", bubble_sort(a,n));
  free(a);
  return 0;
}
