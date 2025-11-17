#include<bits/stdc++.h>
using namespace std;

long long n, m;
vector<int> v;

bool check(long long k) {
    long long need = 0; 
    for (long long i : v) {
        if (i % k == 0) {
            need += i / k;
        } else need += i / k + 1;
    }
    return need <= n;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    long long lo = 0;
    long long hi = 1000000005;
    while (lo + 1 < hi) {
        // 중요
        long long mid = (lo + hi) / 2;
        if (check(mid)) {
            hi = mid;
        } else lo = mid;
    }
    cout << hi;
}