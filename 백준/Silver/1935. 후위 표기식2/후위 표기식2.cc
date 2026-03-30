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
string s;
vector<double> val(26);

void solve() {
    cin >> N >> s;
    for(int i=0;i<N;i++) {
        cin >> val[i];
    }
    stack<double> st;

    for (char c : s) {
        if ('A' <= c && c <= 'Z') {
            st.push(val[c - 'A']);
        }
        else {
            double op2 = st.top();
            st.pop();
            double op1 = st.top();
            st.pop();

            if (c == '+') st.push(op1 + op2);
            else if (c == '-') st.push(op1 - op2);
            else if (c == '*') st.push(op1 * op2);
            else if (c == '/') st.push(op1 / op2);
        }
    }

    cout << fixed << setprecision(2) << st.top() << '\n';
}

int main() {
    fastIO;
    solve();
}