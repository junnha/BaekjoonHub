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
int arr[1005];
int dp[1005];

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=0;i<N;i++) {
        dp[i]=arr[i];
        for(int j=0;j<i;j++) {
            if(arr[j]<arr[i]) {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
}

int main() {
    fastIO;
    solve();
}