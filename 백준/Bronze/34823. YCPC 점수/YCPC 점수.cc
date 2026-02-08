#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long y, c, p;
    cin >> y >> c >> p;

    cout << min({y, c/2, p}) << "\n";
}