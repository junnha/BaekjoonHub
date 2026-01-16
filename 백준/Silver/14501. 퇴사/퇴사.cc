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
int T[100];
int P[100];
int dp[100];

void solve() {
    cin >> N;
    for(int i=1;i<=N;i++) {
        cin >> T[i] >> P[i];
    }
    for(int j=1;j<=N;j++) {
        dp[j]=max(dp[j],dp[j-1]);
        int end = j+T[j];
        if(end<=N+1) dp[end] = max(dp[end], dp[j] + P[j]);
    }
    dp[N + 1] = max(dp[N + 1], dp[N]);
    cout << dp[N + 1];
}

int main() {
    fastIO;
    solve();
}