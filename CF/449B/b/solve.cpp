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

int main() {
  ll k, p, a, b, sum = 0;
  cin >> k >> p;
  for (int i = 1; i <= k; i++) {
    a = b = i;
    while (b) {
      a = a * 10 + b % 10;
      b /= 10;
    }
    sum += a;
  }
  cout << sum % p << endl;
  return 0;
}