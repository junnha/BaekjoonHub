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

int func(int n, int r, int c) {
    if(n == 0) return 0;

    int half = 1<<(n-1);

    if(r < half && c < half) {
        return func(n-1, r, c);
    } if(r < half && c >= half) {
        return half*half + func(n-1, r, c-half);
    } if(r >= half && c < half) {
        return 2*half*half + func(n-1, r-half, c);
    }
    return 3*half*half + func(n-1, r-half, c-half);
}

void solve() {
    int N,r,c;
    cin >> N >> r >> c;
    cout << func(N,r,c);
}

int main() {
    fastIO;
    solve();
}