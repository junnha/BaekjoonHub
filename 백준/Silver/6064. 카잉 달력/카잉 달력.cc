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


int lcm(int a, int b){
  return a / gcd(a, b) * b;
}

int solve(int m, int n, int x, int y){
    if(x == m) x = 0;
    if(y == n) y = 0;
    int l = lcm(m, n);
    for(int i = x; i <= l; i += m){
        if(i == 0) continue;
        if(i % n == y)
        return i;
    }
    return -1;
}

int main() {
    fastIO;
    int n;
    cin >> n;
    while(n--){
        int m,n,x,y;
        cin >> m >> n >> x >> y;
        cout << solve(m, n, x, y) << '\n';
    }
}