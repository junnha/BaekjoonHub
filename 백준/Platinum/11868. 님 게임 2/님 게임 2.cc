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

int N;
ll p[1000004];

void solve() {
    cin >> N;

    ll grundy = 0;
    for (int i = 0; i < N; i++) {
        cin >> p[i];
        grundy ^= p[i];
    }

    if (grundy != 0) cout << "koosaga";
    else cout << "cubelover";
}

int main() {
    fastIO;
    solve();
}