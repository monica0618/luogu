/*小组名和彗星名都以下列方式转换成一个数字：
最终的数字就是名字中所有字母的积，其中A是1，Z是26。
例如，USACO小组就是21×19×1×3×15=1795521 。如果小组的数字 mod 47 等于彗星的数字 mod 47 ,
你就得告诉这个小组需要准备好被带走！

写出一个程序，读入彗星名和小组名并算出用上面的方案能否将两个名字搭配起来，如果能搭配，就输出“GO”，否则输出“STAY”。
小组名和彗星名均是没有空格或标点的一串大写字母（不超过6个字母）。*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  char a;
  int sum = 1;
  string star,team;
  star.reserve(6);
  team.reserve(6);
  getline(cin, star);
  getline(cin, team);
  for(int i = 0; i < star.size(); i++){
    sum *= int(star[i]) - 64;
  }
  int s = sum % 47;
  sum = 1;
  for(int i = 0; i < team.size(); i++){
    sum *= int(team[i]) - 64;
  }
  int t = sum % 47;
  if(s == t) cout << "GO" << endl;
  else cout << "STAY" << endl;
  return 0;
}
