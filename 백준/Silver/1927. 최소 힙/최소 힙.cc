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
    ll N;
    priority_queue<int, vector<int>, greater<int> > pq;
    cin >> N;

    while(N--) {
        ll k;
        cin >> k;

        if(k==0) {
            if(!pq.empty()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else cout << 0 << '\n';
        } else pq.push(k);
    }
}

int main() {
    fastIO;
    solve();
}