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
int w[100001];

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> w[i];
    }
    sort(w,w+N);
    int ans = 0;
    for(int i=1;i<=N;i++) {
        ans = max(ans,w[N-i]*i);
    }
    cout << ans;
}

int main() {
    fastIO;
    solve();
}