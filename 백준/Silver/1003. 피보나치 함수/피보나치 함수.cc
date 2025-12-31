#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)


void solve() {
    int T;
    cin >> T;

    vector<int> arr(T);

    int mx = 0;
    for (int i = 0; i < T; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    vector<int> dp0(mx + 1, 0), dp1(mx + 1, 0);

    if (mx >= 0) {
        dp0[0] = 1;
        dp1[0] = 0;
    }
    if (mx >= 1) {
        dp0[1] = 0;
        dp1[1] = 1;
    }

    for (int n = 2; n <= mx; n++) {
        dp0[n] = dp0[n - 1] + dp0[n - 2];
        dp1[n] = dp1[n - 1] + dp1[n - 2];
    }

    for (int i = 0; i < T; i++) {
        int n = arr[i];
        cout << dp0[n] << ' ' << dp1[n] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}