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

int N,M;
int arr[10];
vi s;
bool isused[10];

void func(int k) {
    if(k == M) {
        for(int i=0;i<M;i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    int prev = 0;
    for(int i=0;i<N;i++) {
        if(isused[i]) continue;
        if(s[i] == prev) continue;
        prev = s[i];
        isused[i] = 1;
        arr[k] = s[i];
        func(k+1);
        isused[i] = 0;
    }
}

void solve() {
    cin >> N >> M;
    s.resize(N);
    for(int i=0;i<N;i++) cin >> s[i];

    sort(s.begin(), s.end());
    func(0);
}

int main() {
    fastIO;
    solve();
}