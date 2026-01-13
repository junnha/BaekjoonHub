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

int d[1000007];
int pre[1000007];
int N;

void solve() {
    cin >> N;
    d[1]=0;
    for(int i=2;i<=N;i++) {
        d[i] = d[i-1] + 1;
        pre[i] = i-1;
        if(i%2==0 && d[i] > d[i/2]+1) {
            d[i] = d[i/2]+1;
            pre[i]=i/2;
        }
        if(i%3==0 && d[i] > d[i/3]+1) {
            d[i] = d[i/3]+1;
            pre[i]=i/3;
        }
    }

    cout << d[N] << '\n';

    int cur = N;
    while(true) {
        cout << cur << ' ';
        if(cur == 1) break;
        cur = pre[cur];
    }
}

int main() {
    fastIO;
    solve();
}