/*一组数，分别表示地平线的高度变化。高度值为整数，相邻高度用直线连接。找出并统计有多少个可能积水的低洼地？*/


#include "bits/stdc++.h"
using namespace std;

int n;

int main() {
    cin >> n;
    int count = 0;
    vector<int> hs(n);
    for(int i = 0; i < n; i++) cin >> hs[i];
    int i = 0;
    while(i < n-1){
        if(hs[i] > hs[i + 1]) {
            int j = i + 1;
            while(j < n - 1 && hs[j] >= hs[j + 1]) j++;
            j += 1;
            if(j == n) {
                cout << count << endl;
                return 0;
            }
            else {
                count++;
                i = j;
            }
        }
        else i++;
    }
    cout << count << endl;
    return 0;
}
