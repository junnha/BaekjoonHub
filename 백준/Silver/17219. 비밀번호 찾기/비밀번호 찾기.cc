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
    int N,M;
    string a,b;
    map<string,string> m;
    cin >> N >> M;
    while(N--) {
        cin >> a >> b;
        m[a]=b;
    }
    while(M--) {
        cin >> a;
        cout << m[a] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}