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
    int N;
    int k;
    cin >> N;
    vi v;
    vi v1;

    for(int i=0;i<N;i++) {
        cin >> k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    int ans1 = 0;

    for(int i=0;i<N;i++) {
        ans = ans + v[i];
        v1.push_back(ans);
    }

    for(int i=0;i<v1.size();i++) {
        ans1 += v1[i];
    }

    cout << ans1;
}

int main() {
    fastIO;
    solve();
}