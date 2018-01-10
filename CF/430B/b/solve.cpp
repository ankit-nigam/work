#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

float R, d, x[100010], y[100010], r[100010];
int n, ans = 0;

float dist(float x, float y) {
  return sqrt(x * x * 1.0 + y * y * 1.0);
}

int main() {
  scanf("%f %f", &R, &d);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%f %f %f", x + i, y + i, r + i);
  }
  for (int i = 0; i < n; i++) {
    float dis = dist(x[i], y[i]);
    if (dis + r[i] <= R && dis - r[i] >= (R - d)) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}