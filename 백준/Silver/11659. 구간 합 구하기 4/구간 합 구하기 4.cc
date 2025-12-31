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
    ll N,M;
    cin >> N >> M;

    ll arr[100001] = {0};
    ll prearr[100001] = {0};

    ll pre = 0;

    for(ll i=0;i<N;i++) {
        ll k;
        cin >> k;
        arr[i] = k;
        pre +=k;
        prearr[i] = pre;
    }

    for(ll i=0;i<M;i++) {
        ll p,q;
        cin >> p >> q;
        ll rp = p-1;
        ll rq = q-1;
        ll ans = 0;

        if(rp == 0) {
            ans = prearr[rq];
        } else ans = prearr[rq] - prearr[rp-1];

        cout << ans << '\n';
    }
}

int main() {
    fastIO;
    solve();
}