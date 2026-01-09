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

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N, M;
int board[10][10];
int c_board[10][10];
vector<pair<int,int>> cctv;

void find(int x,int y,int dir) {
    dir %= 4;
    while(1){
    x += dx[dir];
    y += dy[dir];
    if(x < 0 || x >= N || y < 0 || y >= M || c_board[x][y] == 6) return;
    if(c_board[x][y] != 0) continue;
    c_board[x][y] = 7;
    }
}

void solve() {
    cin >> N >> M;
    int mn = 0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            cin >> board[i][j];
            if(board[i][j] != 0 && board[i][j] != 6)
            cctv.push_back({i,j});
            if(board[i][j] == 0) mn++;
        }
    }
    for(int tmp = 0; tmp < (1<<(2*cctv.size())); tmp++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++) {
                c_board[i][j] = board[i][j];
            }
        }
    int brute = tmp;
    for(int i = 0; i < cctv.size(); i++){
        int dir = brute % 4;
        brute /= 4;
        int x = cctv[i].first;
        int y = cctv[i].second;

        if(board[x][y] == 1){
        find(x,y,dir);
        } else if(board[x][y] == 2){
        find(x,y,dir);
        find(x,y,dir+2);
        } else if(board[x][y] == 3){
        find(x,y,dir);
        find(x,y,dir+1);
        } else if(board[x][y] == 4){
        find(x,y,dir);
        find(x,y,dir+1);
        find(x,y,dir+2);
        } else{ 
        find(x,y,dir);
        find(x,y,dir+1);
        find(x,y,dir+2);
        find(x,y,dir+3);
      }
    }
    int ans = 0;
    for(int i=0;i<N;i++) {
        for(int j=0;j<M;j++) {
            ans += (c_board[i][j]==0);
        }
    }
    mn = min(mn, ans);
}
cout << mn;
}


int main() {
    fastIO;
    solve();
}