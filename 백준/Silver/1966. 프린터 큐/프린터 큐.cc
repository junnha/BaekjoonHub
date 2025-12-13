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
    int T;
    cin >> T;
    for(int i=0;i<T;i++) {
        int N,M;
        cin >> N >> M;
        queue<pii> v;
        priority_queue<int> pq;

        for(int j=0;j<N;j++) {
            int k;
            cin >> k;
            v.push(pii(j, k));
            pq.push(k);
        }
        int cnt = 0;
        
        while(1) {
            auto cur = v.front();
            v.pop();
            if(cur.second==pq.top()) {
                pq.pop();
                cnt++;
                if(cur.first==M) {
                    cout << cnt << '\n';
                    break;
                }
            }
            else {
                v.push(cur);
            }
        }
    }
}
int main() {
    fastIO;
    solve();
}