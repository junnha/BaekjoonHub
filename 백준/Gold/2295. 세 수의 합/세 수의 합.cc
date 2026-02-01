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
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));

    vi two;
    two.reserve(n * (n + 1) / 2);
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            two.push_back(a[i] + a[j]);
        }
    }
    sort(all(two));

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            int need = a[i] - a[j];
            if (binary_search(all(two), need)) {
                cout << a[i];
                return;
            }
        }
    }
}

int main() {
    fastIO;
    solve();
    return 0;
}