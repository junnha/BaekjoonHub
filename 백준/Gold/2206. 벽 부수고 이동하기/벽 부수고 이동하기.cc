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

char board[1002][1002];
int dist[1002][1002][2];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


void solve() {
    queue<tuple<int,int,int>> Q;
    int N,M;
    cin >> N >> M;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin >> board[i][j];
        }
    }
    memset(dist,-1,sizeof(dist));
    dist[0][0][0] = 1;
    Q.push({0,0,0});
    while(!Q.empty()) {
        int x, y, broke;
        tie(x, y, broke) = Q.front();
        Q.pop();

        if(x==N-1 && y==M-1) {
            cout << dist[x][y][broke];
            return;
        }

        for(int dir=0;dir<4;dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if(nx<0||ny<0||nx>=N||ny>=M) continue;
            if(board[nx][ny]=='0' && dist[nx][ny][broke]==-1) {
                dist[nx][ny][broke] = dist[x][y][broke] + 1;
                Q.push({nx,ny,broke});
            }
            if(board[nx][ny]=='1' && broke==0 && dist[nx][ny][1]==-1) {
                dist[nx][ny][1] = dist[x][y][0] + 1;
                Q.push({nx,ny,1});
            }
        }
    }
    cout << -1;
}

int main() {
    fastIO;
    solve();
}