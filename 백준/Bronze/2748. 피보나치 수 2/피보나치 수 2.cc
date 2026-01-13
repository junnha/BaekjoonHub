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
ll d[100];

void solve() {
    cin >> N;
    d[0] = 0;
    d[1] = 1;
    for(int i=2;i<=N;i++) {
        d[i] = d[i-1] + d[i-2];
    }
    cout << d[N];
}

int main() {
    fastIO;
    solve();
}