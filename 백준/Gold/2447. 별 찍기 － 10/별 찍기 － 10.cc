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

char board[5000][5000];

void func(int n,int x,int y) {
    if (n == 1) {
        board[x][y] = '*';
        return;
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i==1&&j==1) {
                continue;
            }
            func(n/3,x+n/3*i,y+n/3*j);
        }
    }

}
void solve() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        fill(board[i], board[i]+N, ' ');
    }
    func(N,0,0);
    for(int i=0;i<N;i++) {
        cout << board[i] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}