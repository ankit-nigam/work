#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool done[101];
vector <int> v;
int cnt[101], x;

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (!done[x]) {
      done[x] = true;
      v.push_back(x);
    }
    if (v.size() > 2) {
      return 0 * printf("No\n");
    }
    cnt[x]++;
  }  
  if (v.size() == 1) {
    return 0 * printf("No\n");
  }
  if (cnt[v[0]] == cnt[v[1]]) {
    printf("Yes\n%d %d\n", v[0], v[1]);
  } else {
    printf("No\n");
  }
  return 0;
}