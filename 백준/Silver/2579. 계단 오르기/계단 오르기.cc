#include<bits/stdc++.h>
using namespace std;
int d[305][3];
int s[305];

int main() {
    int k;
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> s[i];
        if (k == 1) {
            cout << s[1];
            return 0;
        }
    }
    d[1][1] = s[1]; // 처음 계단의 초기값
    d[2][1] = s[2]; // 두번 째 계단의 초기값
    d[1][2] = 0;
    d[2][2] = s[1] + s[2]; // 두번 째 계단을 두 번 연달아 밟은 값

    for (int i = 3; i <= k; i++) {
        d[i][2] = d[i - 1][1] + s[i]; // 3부터의 테이블 중 한 번 계단 뛰어넘기(그 전 테이블과 계단 값을 합침)
        d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i]; // 두 번 뛰어넘기 (한 번뛰어
    }
    cout << max(d[k][1], d[k][2]); // 최댓값 출력
}