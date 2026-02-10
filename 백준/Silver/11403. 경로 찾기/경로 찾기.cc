#include <bits/stdc++.h>
using namespace std;

int n;
bool am[102][102];
bool vis[102];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> am[i][j];

  for (int st = 0; st < n; st++) {
    fill(vis, vis + n, false);
    stack<int> stk;

    for (int nxt = 0; nxt < n; nxt++) {
      if (am[st][nxt]) stk.push(nxt);
    }

    while (!stk.empty()) {
      int cur = stk.top();
      stk.pop();

      if (vis[cur]) continue;
      vis[cur] = true;

      for (int nxt = 0; nxt < n; nxt++) {
        if (!vis[nxt] && am[cur][nxt]) stk.push(nxt);
      }
    }

    for (int j = 0; j < n; j++) cout << vis[j] << ' ';
    cout << '\n';
  }
}