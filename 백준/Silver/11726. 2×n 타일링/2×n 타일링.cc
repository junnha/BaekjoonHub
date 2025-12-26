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
    int d[10005];
    int mod = 10007;
    int n;
    cin >> n;
    d[1] = 1;
    d[2] = 2;
    for(int i=3;i<=n;i++) {
        d[i]=(d[i-1]+d[i-2]) % mod;
    }
    cout << d[n];
}

int main() {
    fastIO;
    solve();
}