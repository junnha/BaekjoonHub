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

    queue<int> Q;
    int F,S,G,U,D;
    cin >> F >> S >> G >> U >> D;
    
    vector<int> dist(F + 1, -1);

    dist[S] = 0;
    int dx[2] = {U,-D};
    Q.push(S);
    while(!Q.empty()) {
        int cur = Q.front();
        Q.pop();
        for(int dir=0;dir<2;dir++) {
            int nxt = cur + dx[dir];
            if(nxt < 1 || nxt > F) continue;      
            if(dist[nxt] != -1) continue;
            Q.push(nxt);
            dist[nxt] = dist[cur]+1;
        }
    }
    if(dist[G]!=-1) {
        cout << dist[G];
    } else {
        cout << "use the stairs";
    }
}

int main() {
    fastIO;
    solve();
}