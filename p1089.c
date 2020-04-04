//津津的零花钱
#include "stdio.h"

int main () {
	int money = 0;
	int save = 0;
	int k = 0;
	int month = 0;
	int budget, diff;
	for(int count = 1; count < 13; count++) {
		scanf("%d\n", &budget);
		int diff = money + 300 - budget;
		if(diff >= 300) {
			save += 300;
			money = diff - 300;
		}
		else if((diff >= 200) && (diff < 300 )) {
			save += 200;
			money = diff - 200;
		}
		else if((diff >= 100) && (diff < 200)) {
			save += 100;
			money = diff - 100;
		}
		else if((diff >= 0) && (diff < 100)) {
			save += 0;
			money = diff;
		}
		else if(diff < 0) {
			k = 1;
			month = count;
			break;
		}
	}
	if (k == 1) printf("-%d", month);
	else printf("%.0f", (save * 1.2 + money));
	return 0;
}
