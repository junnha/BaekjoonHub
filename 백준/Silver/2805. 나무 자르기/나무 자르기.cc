#include<bits/stdc++.h>
using namespace std;
long long n, m;
vector<long long> v;

bool check(long long h) {
    long long sum = 0;
    for (long long i: v) {
        sum += max(0LL, i - h);
    }
    return sum >= m;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long lo = 0;
    long long hi = 1000000001;
    while (lo + 1 < hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid)) {
            lo = mid;
        } else hi = mid;
    }
    cout << lo;
}