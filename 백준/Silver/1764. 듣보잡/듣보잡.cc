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

void solve() {
    int N,M;
    cin >> N >> M;
    
    vector<string> hear;
    vector<string> ans;

    for(int i=0;i<N;i++){
    string s; cin >> s;
        hear.push_back(s);
    }
    sort(hear.begin(),hear.end());

    int cnt = 0;

    for(int i=0;i<M;i++){
        string s; cin >> s;
        if(binary_search(hear.begin(),hear.end(),s)) {
            cnt++;
            ans.push_back(s);
        }
    }


    cout << cnt << '\n';
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    fastIO;
    solve();
}