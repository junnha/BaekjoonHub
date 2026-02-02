#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    ll N, C, P;
    cin >> N >> C >> P;

    if (N <= C * P) cout << "yes\n";
    else cout << "no\n";
}

int main() {
    fastIO;
    solve();
    return 0;
}