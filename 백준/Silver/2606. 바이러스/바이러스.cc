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

int mapping[101][101] = {0,};
bool visited[101] = {0,};

queue<int> q;

int Com;
int N;
int ans;

void bfs(int v) {
    visited[v] = true;
    q.push(v);
    while(!q.empty()) {
        v = q.front();
        q.pop();
        for(int i=1;i<=Com;i++) {
            if(visited[i] == 0 && mapping[v][i] == 1) {
                q.push(i);
                visited[i] = true;
                ans++;
            }
        }
    }
}
void solve() {
    cin >> Com >> N;
    for(int i=0;i<N;i++) {
        int a,b;
        cin >> a >> b;
        mapping[a][b] = 1;
        mapping[b][a] = 1;
    }
    bfs(1);
    cout << ans;
}

int main() {
    fastIO;
    solve();
}