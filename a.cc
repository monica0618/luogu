#include<algorithm>
#include<ctime>
#include<iostream>
#include<vector>

using namespace std;

int main () {
  vector<int> arr(10);
  srand(time(nullptr));
  for (int i = 0; i < 10; i++) {
    arr[i] = rand();
  }
  for (int a : arr) cout << a << " "; cout << endl;
  sort(arr.begin(), arr.end());
  for (int a : arr) cout << a << " "; cout << endl;
  return 0;
}
