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

bool compare(const pii &a, const pii &b) {
    if(a.second != b.second) {
        return a.second < b.second;
    }
    else {
        return a.first < b.first;
    }
}

void solve() {
    vector<pii> v;
    int N;
    int a,b;
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), compare);

    for(auto &p : v) {
        cout << p.first << " " << p.second << "\n";
    }
}

int main() {
    fastIO;
    solve();
}