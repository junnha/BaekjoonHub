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

int main() {
    fastIO;
    int T;
    cin >> T;
    
    string s;
    cin >> s;
  
    ll mod = 1234567891;
    ll value = 0;
    ll hash = 1;

    for (int i = 0; i < T; i++) {
        int alphavalue = (s[i] - 'a' + 1);
        value = (value + alphavalue * hash) % mod;
        hash = (hash * 31) % mod;
    }

    cout << value << "\n";
}