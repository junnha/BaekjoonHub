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

int cmp(string x,string y) {
    int xsize = x.size();
    int ysize = y.size();
    int xsum = 0;
    int ysum = 0;
    if(xsize!=ysize) return xsize < ysize;

    for(int i=0;i<x.size();i++) {
        if (x[i] >= '0' && x[i] <= '9') {
			xsum += int(x[i]) - 48;
        }
        if (y[i] >= '0' && y[i] <= '9') {
			ysum += int(y[i]) - 48;
        }
    }
    if(xsum!=ysum) return xsum < ysum;

    return x < y;
}

void solve() {
    int N;
    string serial[50];
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> serial[i];
    }

    sort(serial,serial+N,cmp);

    for(int i=0;i<N;i++) {
        cout << serial[i] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}