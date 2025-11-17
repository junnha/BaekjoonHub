#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10000][15];
    for (int i=0; i<15;i++) {
        arr[0][i]=i;
    }
    for (int i=1;i<15;i++) {
        for (int j =1;j<15;j++) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }

    int T;
    cin >> T;
    while (T--) {
        int K, N;
        cin >> K >> N;
        cout << arr[K][N] << '\n';
    }
}