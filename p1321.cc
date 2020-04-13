/*一个长度为 l(3≤l≤255)
的字符串中被反复贴有 boy 和 girl 两单词，后贴上的可能覆盖已贴上的单词（没有被覆盖的用句点表示），
最终每个单词至少有一个字符没有被覆盖。问贴有几个 boy 几个 girl？*/

#include "bits/stdc++.h"
using namespace std;

int main () {
	string str;
	getline(cin, str);
	int boy = 0;
	int girl = 0;
	int n = str.length();
	for(int i = 0; i < n; i++){
		if(str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y') boy++;
		if(str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l') girl++;
	}
	cout << boy << endl << girl;
	return 0;
}
