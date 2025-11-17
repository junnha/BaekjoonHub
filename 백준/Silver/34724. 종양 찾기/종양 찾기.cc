#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    vector<string> board(N);
    for (int i = 0; i < N; i++) cin >> board[i];

    for (int i = 0; i + 1 < N; i++) {
        for (int j = 0; j + 1 < M; j++) {
            if (board[i][j] == '1' && board[i][j + 1] == '1' &&
                board[i + 1][j] == '1' && board[i + 1][j + 1] == '1') {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
}