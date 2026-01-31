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

const int MAX = 1001;
int N, M;
int mapp[MAX][MAX] = { 0, };
bool visited[MAX] = { 0, };


void DFS(int v) {
    visited[v] = true;
 
    for (int i=1;i<=N;i++) {
        if (mapp[v][i] == 1 && visited[i] == 0) {
            visited[i] = 1;
            DFS(i);
        }
    }
}

void solve() {

    cin >> N >> M;
    for (int i=0;i<M;i++) {
        int u,v;
        cin >> u >> v;
        mapp[u][v] = 1;
        mapp[v][u] = 1;
    }
 
    int cnt=0;
    for (int i=1;i<=N;i++) {
        if (visited[i] == 0) {
            DFS(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    fastIO;
    solve();
}