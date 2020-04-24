#include "bits/stdc++.h"
using namespace std;

static int fast_io = [] () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 0;
 } ();

long long get_sum(vector<int>& h, int k) {
  long long sum = 0;
  for(int i = 0; i < h.size(); i++)
    sum += (h[i] > k ? h[i]-k : 0);
  return sum;
}

int find(int longest, vector<int>& h, int m){
  int l = 1;
  int r = longest + 1;
  while (l + 1 < r) {
    int mid = (l + r)/2;
    if(get_sum(h,mid) < m){
      r = mid;
    }
    else{
      l = mid;
    }
  }
  return l;
}

int main () {
  int n,m;
  cin >> n >> m;
  vector<int> h (n);
  int longest = -1;
  for(int i = 0; i < n; i++) {
    cin >> h[i];
    longest = max(longest, h[i]);
  }
  cout << find(longest, h, m);
  return 0;
}
