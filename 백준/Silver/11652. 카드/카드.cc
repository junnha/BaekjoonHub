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

ll arr[100005];

void solve() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    sort(arr,arr+N);
    int cnt = 0;
    ll mxval = (1ll << 62)-1;
    ll mxcnt = 0;

    for(int i=0;i<N;i++) {
        if(i == 0 || arr[i-1] == arr[i]) {
            cnt++;
        } else {
            if(mxcnt<cnt) {
            mxcnt = cnt;
            mxval = arr[i-1];
            }
            cnt = 1;
            }
        }
        
        if(cnt>mxcnt) {
        mxval = arr[N-1];
        }
    
    cout << mxval;
}

int main() {
    fastIO;
    solve();
}