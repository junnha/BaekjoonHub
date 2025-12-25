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
int N, M, V;
int mapping[1001][1001] = {0,};
bool visiteddfs[1001] = {0};
bool visitedbfs[1001] = {0};

void DFS(int x) {
        visiteddfs[x] = true;
        cout << x << " ";
        for (int i = 1; i <= N; i++) {
            if (!visiteddfs[i] && mapping[x][i] == 1) {
                DFS(i);
            }
        }
    }

void solve() {
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        mapping[a][b] = 1;
        mapping[b][a] = 1;
    }

    DFS(V);
    cout << "\n";

    queue<int> q;
    queue<int> ans;

    visitedbfs[V] = true;
    q.push(V);
    ans.push(V);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int i = 1; i <= N; i++) {
            if (!visitedbfs[i] && mapping[cur][i] == 1) {
                visitedbfs[i] = true;
                q.push(i);
                ans.push(i);
            }
        }
    }

    while (!ans.empty()) {
        cout << ans.front() << " ";
        ans.pop();
    }
    cout << "\n";
}

int main() {
    fastIO;
    solve();
}