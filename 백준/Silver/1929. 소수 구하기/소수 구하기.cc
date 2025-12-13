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
    int M, N;
    cin >> M >> N;

    vector<bool> isPrime(N + 1, true);
    if (N >= 0) isPrime[0] = false;
    if (N >= 1) isPrime[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (!isPrime[i]) continue;
        for (int j = i * i; j <= N; j += i) {
            isPrime[j] = false;
        }
    }

    for (int i = M; i <= N; i++) {
        if (isPrime[i]) cout << i << '\n';
    }
}

int main() {
    fastIO;
    solve();
}