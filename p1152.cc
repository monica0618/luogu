#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> diff(n-1);
  vector<int> jump(n-1);
  for(int i = 0; i < n; i++) {
    if(i != 0) jump[i-1] = i;
    cin >> arr[i];
    if(i != 0){
      if(arr[i] >= arr[i-1]) diff[i-1] = arr[i] - arr[i-1];
      else diff[i-1] = arr[i-1] - arr[i];
    }
  }
  sort(diff.begin(), diff.end());
  bool is_jolly = true;
  for(int j = 0; j < n-1; j++) {
    if(diff[j] != jump[j]) is_jolly = false;
  }
  if(is_jolly) cout << "Jolly" << endl;
  else cout << "Not jolly" << endl;
  return 0;
}
