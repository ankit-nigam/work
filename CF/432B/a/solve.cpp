#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n, t, k;
  scanf("%lld %lld %lld", &n, &k, &t);
  if (t <= k) {
    printf("%lld\n", t);
  } else if (t > k && t <= n) {
    printf("%lld\n", k);
  } else {
    printf("%lld\n", k - (t - n));
  }
  return 0;
}