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

void func(int k) {
    if(k == M) {
        for(int i=0;i<M;i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int j=1;j<=N;j++) {
        arr[k]=j;
        func(k+1);
    }
}

void solve() {
    cin >> N >> M;
    func(0);
}

int main() {
    fastIO;
    solve();
}