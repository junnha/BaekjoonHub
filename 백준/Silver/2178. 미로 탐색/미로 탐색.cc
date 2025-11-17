#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
string board[502];
int dist[502][502]; // 해당 칸을 방문했는지 여부를 저장
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

int main() {
    int N,M;
    cin >> N >> M;
    
    for(int i = 0; i < 502; i++) {
        for(int j = 0; j < 502; j++) {
            dist[i][j] = -1;
        }
    }
    
    for(int i=0;i<N;i++) {
        cin >> board[i];
    }
    queue<pair<int,int>> Q;
    Q.push({0,0});
    dist[0][0]=0;
    while(!Q.empty()) {
        pair<int,int> cur = Q.front();
		Q.pop();
			for(int dir = 0; dir < 4; dir++){
      			int nx = cur.X + dx[dir];
      			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표
      			
				if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue; // 범위 밖인 경우 넘기기
      			if(dist[nx][ny] != -1 || board[nx][ny] != '1') continue; // dist가 1이 아니거나 board가 1이 아닐 때
      			dist[nx][ny] = dist[cur.X][cur.Y]+1;
      			Q.push({nx,ny});
    			}
  		}
        cout << dist[N-1][M-1]+1;
    }

