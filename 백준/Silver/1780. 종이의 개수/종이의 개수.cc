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
int Ans1 = 0;
int Ans0 = 0;
int Ansmi1 = 0;

int arr[3001][3001];

bool same(int x, int y, int M) {
    int p = arr[x][y];
    for(int i=x;i<x+M;i++) {
        for(int j=y;j<y+M;j++) {
            if(arr[i][j]!=p) {
                return false;
            }
        }
    }
    return true;
}

void find(int x, int y, int M) {
    
    if(M==0) return;

    if (same(x, y, M)) {
        if(arr[x][y]==1) {
            Ans1++;
        } else if(arr[x][y]==0) {
            Ans0++;
        } else if(arr[x][y]==-1) {
            Ansmi1++;
        }
        return;
    }
    int split = M/3;
    int split2 = split*2;

    find(x,y,split);
    find(x+split,y,split);
    find(x+split2,y,split);
    find(x,y+split,split);
    find(x,y+split2,split);
    find(x+split,y+split,split);
    find(x+split2,y+split2,split);
    find(x+split,y+split2,split);
    find(x+split2,y+split,split);
}

void solve() {
    int N;
    cin >> N;

    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            int k;
            cin >> k;
            arr[i][j] = k;
        }
    }
    Ans1 = 0;
    Ans0 = 0;
    Ansmi1 = 0;
    find(0,0,N);

    cout << Ansmi1 << '\n' << Ans0 << '\n'<< Ans1;
}

int main() {
    fastIO;
    solve();
}