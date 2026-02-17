#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    int len = (int)(m-n+1);
    vector<char> bad(len, 0);

    for (long long i=2;i*i<=m;i++) {
        long long q = i*i;

        long long start = (n+q-1)/q*q;
        for (long long x=start;x<=m;x+=q) {
            bad[(int)(x-n)] = 1;
        }
    }

    long long ans = 0;
    for (int i=0;i<len;i++) {
        if (!bad[i]) ans++;
    }

    cout << ans << "\n";
}