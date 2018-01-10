#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool done[1010];
int y[1010], n;
vector <pair <int, int> > v;

int main() {
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", y + i);
  }
  int bbb = y[3] - y[2];
  int cnt = 0, cnts = 0;
  for (int i = 1; i <= n; i++) {
    if ((y[i] - y[2]) == bbb * (i - 2)) {
      cnt++;
    }
  }
  if (cnt == n) {
    return 0 * printf("No\n");
  }
  if (cnt == n - 1) {
    return 0 * printf("Yes\n");
  }
  for (int i = 2; i <= n; i++) {
    int a = i - 1;
    int b = y[i] - y[1];
    cnt = 0, cnts = 0;
    v.clear();
    double sl1 = (b * 1.0) / (a * 1.0);
    for (int j = 1; j <= n; j++) {
      done[j] = false;
    }
    for (int j = 1; j <= n; j++) {
      if (a * (y[j] - y[1]) == b * (j - 1)) {
        cnt++;
        done[j] = true;
      }
    }
    if (cnt == n) {
      return 0 * printf("No\n");
    }
    if (cnt == n - 1) {
      return 0 * printf("Yes\n");
    }
    for (int j = 1; j <= n; j++) {
      if (!done[j]) {
        v.push_back(make_pair(j, y[j]));
      }
    }
    int aa = v[1].first - v[0].first;
    int bb = v[1].second - v[0].second;
    double sl2 = (bb * 1.0) / (aa * 1.0);
    for (int j = 0; j < (int) v.size(); j++) {
      if (aa * (v[j].second - v[0].second) == bb * (v[j].first - v[0].first)) {
        cnts++;
      }
    }
    if ((cnts + cnt == n) && (sl1 == sl2)) {
      return 0 * printf("Yes\n");
    }
  }
  printf("No\n");
  return 0;
}