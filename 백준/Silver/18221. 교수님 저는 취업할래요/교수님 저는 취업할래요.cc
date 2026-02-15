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

int N;
int board[1005][1005];
int proi;
int projj;
int stui;
int stuj;

void solve() {
    cin >> N;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> board[i][j];
            if(board[i][j]==5) {
                proi = i;
                projj = j;
            }
            if(board[i][j]==2) {
                stui = i;
                stuj = j;
            }
        }
    }
    int r1 = min(proi, stui);
    int r2 = max(proi, stui);
    int c1 = min(projj, stuj);
    int c2 = max(projj, stuj);

    int cnt = 0;
    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            if (board[i][j] == 1) cnt++;
        }
    }
    int s = (proi-stui)*(proi-stui);
    int v = (projj-stuj)*(projj-stuj);
    if((s+v)>=25 && cnt >= 3) {
        cout << 1;
    } else cout << 0;
}

int main() {
    fastIO;
    solve();
}