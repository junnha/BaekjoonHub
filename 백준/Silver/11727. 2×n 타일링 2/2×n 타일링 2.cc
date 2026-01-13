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
int d[10005];

void solve() {
    cin >> N;
    d[1] = 1;
    d[2] = 3;
    d[3] = 5;
    for(int i=4;i<=N;i++){
    d[i] = (d[i-1] + (2 * d[i-2])) % 10007;
    }

    cout << d[N];
}

int main() {
    fastIO;
    solve();
}