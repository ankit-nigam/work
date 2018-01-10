#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
char c[210];

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  } 
  int st = 0, en, ans = 0;
  for (int i = 0; i < n; i++) {
    if (isupper(c[i])) {
      en = i - 1;
      set <char> s;
      for (int j = st; j <= en; j++) {
        s.insert(c[j]);
      }
      ans = max(ans, (int) s.size());
      st = i + 1;
    }
  }
  set <char> s;
  for (int i = st; i < n; i++) {
    s.insert(c[i]);
  }
  ans = max(ans, (int) s.size());
  printf("%d\n", ans);
  return 0;
}