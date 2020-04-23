#include "bits/stdc++.h"

using namespace std;

static int fast_io = [] () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  return 0;
 } ();

int main () {
  int m, n, r;
  vector<char> ans;
  ans.reserve(30);
  cin >> m >> r;
  n = m;
  while(n){
    int mod = n % r;
    if (mod < 0) {
      n = n / r + 1;
      mod = mod - r;
    }
    else n = n / r;
    if (mod < 10) ans.push_back(char(mod + 48));
    else ans.push_back(char(mod + 55));
  }

  cout << m << "=";
  for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i];
  cout << "(base" << r << ")";

  return 0;
}
