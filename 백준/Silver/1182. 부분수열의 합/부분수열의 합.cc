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

int cnt = 0;
int arr[1001];
int N,S;

void func(int c, int t) {
    if(c==N) {
        if(t==S) cnt++;
        return;
    }
    func(c+1,t);
    func(c+1,t+arr[c]);
}

void solve() {
    cin >> N >> S;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }
    func(0,0);
    if(S==0) cnt--;
    cout << cnt;
}

int main() {
    fastIO;
    solve();
}