#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;

ll n, a[100010], mi[500010], id[500010];

ll query(ll node, ll l, ll r, ll lo, ll hi) {
  if (lo > r || hi < l) {
    return 0;
  }
  if (l >= lo && r <= hi) {
    return id[node];
  }
  int mid = (l + r) >> 1;
  ll x = query(2 * node, l, mid, lo, hi);
  ll y = query(2 * node + 1, mid + 1, r, lo, hi);
  return (a[x] < a[y] ? x : y);
}

void build(ll node, ll l, ll r) {
  if (l == r) {
    mi[node] = a[l];
    id[node] = l;
    return;
  }
  ll mid = (l + r) >> 1;
  build(2 * node, l, mid);
  build(2 * node + 1, mid + 1, r);
  if (mi[2 * node] < mi[2 * node + 1]) {
    mi[node] = mi[2 * node];
    id[node] = id[2 * node];
  } else {
    mi[node] = mi[2 * node + 1];
    id[node] = id[2 * node + 1];
  }
}

ll solve(ll l, ll r) {
  if (l > r) {
    return -1;
  }
  if (l == r) {
    return a[l];
  }
  ll m = query(1, 1, n, l, r);
  return max(solve(l, m - 1), max(solve(m + 1, r), (r - l + 1) * a[m]));
}

int main() {
  #ifdef HOME
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
  #endif
  
  scanf("%lld", &n);
  while (n) {
    for (int i = 0; i < 100010; i++) {  
      a[i] = 1e9 + 10;
    }
    for (int i = 1; i <= n; i++) {
      scanf("%lld", &a[i]);
    }
    build(1, 1, n);
    printf("%lld\n", solve(1, n));
    scanf("%d", &n);
  }
  
  #ifdef HOME
    fprintf(stderr, "Time taken:- %.3fs\n", (double) clock() / CLOCKS_PER_SEC);
    fflush(stderr);
  #endif
  return 0;
} 