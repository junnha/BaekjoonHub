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
int Ansblue = 0;
int Answhite = 0;



int arr[1001][1001];

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
            Ansblue++;
        } else Answhite++;
        return;
    }

    find(x,y,M/2);
    find(x+(M/2),y,M/2);
    find(x,y+(M/2),M/2);
    find(x+(M/2),y+(M/2),M/2);
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
    Ansblue = 0;
    Answhite = 0;
    find(0,0,N);

    cout << Answhite << '\n' << Ansblue;
}

int main() {
    fastIO;
    solve();
}