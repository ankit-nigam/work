#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[100010], p[100010], n;

ll check(ll k) {
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        p[i] = (a[i] + i * k);
    }
    sort(p, p + n + 1);
    for (int i = 1; i <= k; i++) {
        res += p[i];
    }
    return res;
}

int main() {
    ll s, ans = 0, tot = 0;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll l = 1, r = n;
    while (l <= r) {
        ll mid = (l + r) >> 1;
        ll x = check(mid);
        if (x <= s) {
            ans = x;
            tot = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << tot << " " << ans << endl;
    return 0;
}