#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, a[110];

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  if (!(n & 1)) {
    return 0 * printf("No\n");
  }
  if (!(a[0] & 1) || !(a[n - 1] & 1)) {
    return 0 * printf("No\n");
  }
  printf("Yes\n");
  return 0;
}