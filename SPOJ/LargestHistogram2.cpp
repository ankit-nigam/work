#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;

ll n, a[100010];

int main() {
  #ifdef HOME
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
  #endif
  
  scanf("%lld", &n);
  while (n) {
    for (int i = 0; i < n; i++) {
      scanf("%lld", &a[i]);
    }
    stack <ll> s;
    ll i = 0, ans = 0;
    while (i < n) {
      if (s.empty() || a[s.top()] <= a[i]) {
        s.push(i);
        i++;
      } else {
        ll x = s.top();
        s.pop();
        ans = max(ans, a[x] * (s.empty() ? i : i - s.top() - 1));
      }
    }
    while (!s.empty()) {
      ll x = s.top();
      s.pop();
      ans = max(ans, a[x] * (s.empty() ? i : i - s.top() - 1));
    }
    printf("%lld\n", ans);
    scanf("%lld", &n);
  }
  
  #ifdef HOME
    fprintf(stderr, "Time taken:- %.3fs\n", (double) clock() / CLOCKS_PER_SEC);
    fflush(stderr);
  #endif
  return 0;
} 