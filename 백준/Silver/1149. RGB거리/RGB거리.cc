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

int dp[1004][3];
int R[1004];
int G[1004];
int B[1004];

void solve() {
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> R[i] >> G[i] >> B[i];
    }
    dp[0][0] = R[0];
    dp[0][1] = G[0];
    dp[0][2] = B[0];

    for(int j=1;j<N;j++) {
        dp[j][0] = min(dp[j-1][1],dp[j-1][2]) + R[j];
        dp[j][1] = min(dp[j-1][0],dp[j-1][2]) + G[j];
        dp[j][2] = min(dp[j-1][1],dp[j-1][0]) + B[j];
    }
    cout << min({dp[N-1][0], dp[N-1][1], dp[N-1][2]});
}

int main() {
    fastIO;
    solve();
}