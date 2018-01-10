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

int n, cnt[200010], a[200010], ans = 0;
vpi v;
bool done[200010];
queue <int> q;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    cnt[a[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (cnt[a[i]] > 1) {
      v.pb(mp(a[i], i));
    }
  }
  for (int i = 1; i <= n; i++) {
    if (!cnt[i]) {
      q.push(i);
      ans++;
    }
  }
  for (int i = 0; i < (int) v.size(); i++) {
    if ((q.front() > v[i].fi) && done[v[i].fi]) {
      a[v[i].se] = q.front();
      q.pop();
      continue;
    } 
    if ((q.front() < v[i].fi) && (cnt[v[i].fi] > 1)) {
      a[v[i].se] = q.front();
      q.pop();
      cnt[v[i].fi]--;
      continue;
    }
    if (q.front() > v[i].fi) {
      done[v[i].fi] = true;
    }
  }
  printf("%d\n", ans);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}