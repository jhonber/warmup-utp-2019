#include<bits/stdc++.h>
using namespace std;

int main() {
  string num;
  while (cin >> num) {
    int ans = 0;
    for (auto i: num) ans += (i == '0');
    cout << ans << endl;
  }

  return 0;
}