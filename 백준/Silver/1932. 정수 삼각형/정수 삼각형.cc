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
int d[1000][1000];
int ans[1000][1000];


void solve() {
    cin >> N;

    for (int i=1;i<=N;i++) {
        for (int j=1;j<=i;j++) {
        cin >> d[i][j];
        }
    }
    ans[1][1] = d[1][1];

    for(int i=2;i<=N;i++) {
        for(int j=1;j<=i;j++) {
            ans[i][j] = max(ans[i-1][j-1],ans[i-1][j]) + d[i][j];
        }
    }
    cout << *max_element(ans[N]+1,ans[N]+N+1);
}

int main() {
    fastIO;
    solve();
}