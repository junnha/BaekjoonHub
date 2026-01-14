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
ll d[1000];

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        int k;
        cin >> k;
        d[0] = 0;
        d[1] = 1;
        d[2] = 1;
        d[3] = 1;
        d[4] = 2;
        d[5] = 2;
        for(int i=6;i<=k;i++) {
            d[i]=d[i-1]+d[i-5];
        }
        cout << d[k] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}