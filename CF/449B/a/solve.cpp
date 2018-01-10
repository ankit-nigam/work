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
typedef vector<pii> vpii;
typedef vector<vi> vvi;

char c[110], x, y;

int main() {
  int n, m, l, r;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> l >> r >> x >> y;
    for (int j = l; j <= r; j++) {
      if (c[j] == x) {
        c[j] = y;
      }
    }
  }  
  for (int i = 1; i <= n; i++) {
    cout << c[i];
  }
  return 0;
}