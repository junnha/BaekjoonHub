#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> n(N + 1, 0);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        n[a]++;
        n[b]++;
    }
    int q;
    cin >> q;

    while (q--) {
        int t, k;
        cin >> t >> k;

        if (t == 1) {
            if (n[k] >= 2) cout << "yes\n";
            else cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
}