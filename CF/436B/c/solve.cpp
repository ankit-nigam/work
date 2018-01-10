#include <bits/stdc++.h>

#define fi first
#define se second
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll st[100010], fu[100010];

int main() {
  ll a, b, f, k;
  scanf("%lld %lld %lld %lld", &a, &b, &f, &k);
  if (b < f) return 0 * printf("-1\n");
  st[1] = 0;
  for (int i = 2; i <= k + 1; i++) st[i] = st[i - 1] + a;
  for (int i = 1; i <= k; i++) {
    if (i & 1) fu[i] = st[i] + f;
    else fu[i] = st[i + 1] - f;
  } 
  ll t = 0, id = 1;
  set <int> s;
  while (id <= k) {
    bool ok = false;
    if (t + b >= st[k + 1]) return 0 * printf("%d\n", s.size());
    while (t + b >= fu[id] && id <= k) {
      ok = true;
      id++; 
    }
    if (!ok) return 0 * printf("-1\n");
    t = fu[id - 1];
    s.insert(id - 1);
  }
  if (t + b >= st[k + 1]) printf("%d\n", s.size());
  else printf("-1\n");
  return 0;
}