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
int isused[10000] = {0};
int sets[10000] = {0};

void func(int k) {
    if(k == M) {
        for(int i=0;i<M;i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0;i<10000;i++) {
        if(sets[i] == 1 && isused[i] == 0) {
            arr[k] = i;
            isused[i]=1;
            func(k+1);
            isused[i]=0;
        }
    }
}

void solve() {
    cin >> N >> M;
    for(int i=0;i<N;i++) {
        int t;
        cin >> t;
        sets[t] = 1;
    }
    func(0);
}

int main() {
    fastIO;
    solve();
}