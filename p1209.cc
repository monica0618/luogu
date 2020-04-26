#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  return 0;
 } ();

int main () {
  int m,s,c;
  cin >> m >> s >> c;
 
  vector<int> cows(c);
  vector<int> diff(c-1);
  cin >> cows[0];
  for(int i = 1; i < c; i++) cin >> cows[i];

  sort(cows.begin(),cows.end());

  for(int i = 1; i < c; i++) {
    diff[i-1] = cows[i] - cows[i-1];
  }

  if(m >= c){
    cout << c;
    return 0;
  }

  int total = cows[c-1] - cows[0] + 1;

  for(int i = 0; i < m - 1; i++) {
    int ith = i;
    for(int j = i + 1; j < c - 1; j++) {
      if(diff[j] > diff[ith]) {
        ith = j;
      }
    }
    int t = diff[i];
    diff[i] = diff[ith];
    diff[ith] = t;
    total -= diff[i] - 1;
  }

  cout << total;

  return 0;
}
