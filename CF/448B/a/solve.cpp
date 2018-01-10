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

int a[500];

int main() {
  int n, sum = 0, ans = 500;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
    
  }  
  for (int i = 0; i < n; i++) {
    sum += a[i];
    ans = min(ans, abs(sum - 180));
  }
  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j <= i; j++) {
      sum += a[j];
    }
    for (int j = n - 1; j > i; j--) { 
      sum += a[j];
      ans = min(ans, abs(sum - 180));
    }
  } 
  printf("%d\n", 2 * ans);
  return 0;
}