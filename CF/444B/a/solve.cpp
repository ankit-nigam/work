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

int main() {
  int cnt = 0, st = 101;
  string a;
  cin >> a;
  for (int i = 0; i < (int) a.size(); i++) {
    if (a[i] == '1') {
      st = i;
      break;
    }
  }
  for (int i = st; i < (int) a.size(); i++) {
    if (a[i] == '0') {
      cnt++;
    }
    if (cnt >= 6) {
      return 0 * printf("yes\n");
    }
  }
  printf("no\n");
  return 0;
}