#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    const double pi = 3.141592;
    double ans = 2.0 * a + 2.0 * pi * b;

    cout << fixed << setprecision(6) << ans;
}