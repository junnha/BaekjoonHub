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

int dh[6] = {0,1,0,0,-1,0};
int dx[6] = {1,0,0,-1,0,0};
int dy[6] = {0,0,1,0,0,-1};

char board[31][31][31];
int dist[31][31][31];

void solve() {
    int L,R,C;
    while(1){
    
        cin>>L>>R>>C;    
        if(L==0 && R==0 && C==0) break;
        queue<tuple<int,int,int>> Q;
        bool isEscape = false;

        for(int i=0;i<L;i++) {
            for(int j=0;j<R;j++) {
            fill(dist[i][j],dist[i][j]+C,-1);
            }
        }

        for(int i=0;i<L;i++) {
            for(int j=0;j<R;j++) {
                for(int k=0;k<C;k++) {
                    cin >> board[i][j][k];
                    if(board[i][j][k] == 'S'){
                    Q.push({i,j,k});
                    dist[i][j][k] = 0;
                    }
                }
            }   
        }
    
        while(!Q.empty()) {
            if(isEscape) break;
            auto cur = Q.front(); Q.pop();
            int curH, curX, curY;
            tie(curH, curX, curY) = cur;
            for(int dir=0;dir<6;dir++){
                int nh = curH + dh[dir];
                int nx = curX + dx[dir];
                int ny = curY + dy[dir];
                if(nh<0||nx<0||ny<0) continue;
                if(nh>=L||nx>=R||ny>=C) continue;
                if(board[nh][nx][ny] == '#'|| dist[nh][nx][ny]>0) continue;
                dist[nh][nx][ny] = dist[curH][curX][curY] + 1;

                if(board[nh][nx][ny] == 'E') {
                    cout << "Escaped in " << dist[nh][nx][ny] << " minute(s).\n";
                    isEscape = true;
                    break;
                }
                Q.push({nh,nx,ny});
            }
        }
        if(!isEscape) {
            cout << "Trapped!" << '\n';
        }
    }
}

int main() {
    fastIO;
    solve();
}