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

char board[3100][6200];

void func(int n,int x,int y){
    if(n==3){
        board[x][y]='*';
        board[x+1][y-1]='*';
        board[x+1][y+1]='*';
        for(int i=-2;i<=2;i++) board[x+2][y+i]='*';
        return;
    }
    int half=n/2;
    func(half,x,y);
    func(half,x+half,y-half);
    func(half,x+half,y+half);
}

void solve(){
    int N;cin>>N;
    int W=2*N-1;
    for(int i=0;i<N;i++) fill(board[i],board[i]+W,' ');
    func(N,0,N-1);
    for(int i=0;i<N;i++){
        for(int j=0;j<W;j++) cout<<board[i][j];
        cout<<'\n';
    }
}

int main(){
    fastIO;
    solve();
}