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

int D,M;
int arrD[55];
int arrM[55];

void solve() {
    cin >> D >> M;
    for(int i=0;i<D;i++) cin >> arrD[i];
    for(int j=0;j<M;j++) cin >> arrM[j];

    ll G = arrM[0];
    for(int j=1;j<M;j++) G = std::gcd(G, (ll)arrM[j]);

    ll L = arrD[0];
    for(int i=1;i<D;i++) {
        ll g = std::gcd(L, (ll)arrD[i]);
        __int128 tmp = (__int128)(L/g) * (ll)arrD[i];
        if(tmp>G) {L=G+1; break; }
        L = (ll)tmp;
    }
    if(G%L!=0) {
        cout << 0 << "\n";
        return;
    }

    ll x = G/L; 
    ll ans=1;
    for(ll p=2;p*p<=x;p++) {
        if(x%p) continue;
        int cnt=0;
        while(x%p==0) {x/=p; cnt++;}
        ans *= (cnt+1);
    }
    if(x>1) ans*=2;

    cout << ans << "\n";
}

int main() {
    fastIO;
    solve();
}