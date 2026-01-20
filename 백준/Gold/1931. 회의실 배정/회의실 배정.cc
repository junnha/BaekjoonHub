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
pii s[1000003];

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> s[i].second >> s[i].first;
    }
    sort(s,s+N);
    int ans = 0;
    int t = 0;
    for(int i=0;i<N;i++) {
        if(t>s[i].second) {
            continue;
        }
        ans++;
        t=s[i].first;
    }
    cout << ans;
}

int main() {
    fastIO;
    solve();
}