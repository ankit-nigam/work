#include <bits/stdc++.h>

#define fi first
#define se second
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<vi> vvi;

int a[100010];

int solve(int val, int x, int lo, int hi, int k, bool big) {
  int id = 0;
  while (lo <= hi) {
    int mid = (lo + hi) >> 1;
    int z = (a[mid] / val) - (x / val) + (x % val == 0);
    if (z == k && a[mid] >= x) {
      id = mid;
      if (big) {
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    } else if (z < k || a[mid] < x) {
      lo = mid + 1;
    } else {
      hi = mid - 1;
    }
  }
  return id;
}

int main() {
  int n, x, k;
  ll ans = 0;
  scanf("%d %d %d", &n, &x, &k);
  for (int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  sort(a, a + n + 1);
  for (int i = 1; i <= n; i++) {
    int lid = solve(x, a[i], 1, n, k, false);
    int hid = solve(x, a[i], 1, n, k, true);
    if (lid && hid) {
      ans += (hid - lid + 1);
    }
  }
  printf("%lld\n", ans);
  return 0;
} 