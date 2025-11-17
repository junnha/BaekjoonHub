#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long lo = 0, hi = 4300000000;
    
    while (lo < hi) {
        long long mid = (lo + hi) / 2;
        if (mid * mid >= n) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << hi;
}