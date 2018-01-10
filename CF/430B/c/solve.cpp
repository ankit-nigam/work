#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

set <int> ans[200010];
vector <int> adj[200010];
int n, x, y, a[200010];

void dfs(int x, int p, int no) {
  ans[x].insert(no);
  no = __gcd(no, a[x]);
  ans[x].insert(no);
  for (int i : ans[p]) {
    ans[x].insert(__gcd(i, a[x]));
  }
  for (int i = 0; i < (int) adj[x].size(); i++) {
    if (adj[x][i] != p) {
      dfs(adj[x][i], x, no);
    }
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dfs(1, 0, 0);
  for (int i = 1; i <= n; i++) {
    printf("%d ", *ans[i].rbegin());
  }
  return 0;
}