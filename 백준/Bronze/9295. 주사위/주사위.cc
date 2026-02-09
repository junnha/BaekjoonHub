#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    fastIO;

    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << (a + b) << "\n";
    }
}

int main() {
    solve();
}