#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll l, r, x, y, k;

bool solve(ll lo, ll hi) {
  while (lo <= hi) {
    ll mid = (lo + hi) >> 1;
    if (mid * k >= l && mid * k <= r) {
      return true;
    } else if (mid * k > r) {
      hi = mid - 1;
    } else if (mid * k < l) {
      lo = mid + 1;
    }
  }
  return false;
}

int main() {
  cin >> l >> r >> x >> y >> k;
  if (solve(x, y)) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}