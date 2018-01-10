#include <bits/stdc++.h>

using namespace std;

long long a[100010];

int main(){
  ios::sync_with_stdio(0);
  int n;
  long long s = 0, m = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    s += a[i];
    m = max(m, a[i]);
  }
  cout << (2 * m - s) + 1 << endl;
  return 0;
}