#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[10];

void dfs(int x, int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++)
            cout << A[i] << " ";
        cout << "\n";
        return;
    }
    for (int i = x + 1; i <= N; i++) {
        A[cnt] = i;
        dfs(i, cnt + 1);
    }
}
int main() {
    cin >> N >> M;
    dfs(0, 0);
}
