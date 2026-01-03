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
const int MAX = 64;
int arr[MAX][MAX];

void solve1(int n, int y, int x)
{
  if (n == 1) { // 최소일때
    cout << arr[y][x];
    return;
  }
  bool zero = true, one = true;
  for (int i=y;i<y+n;i++) {
    for (int j=x;j<x+n;j++) {
      if (arr[i][j])
        zero = false;
      else
        one = false;
        }
    }
  if (zero)
    cout << 0;
  else if (one)
    cout << 1;
  else {
    cout << "(";
    solve1(n / 2, y, x); //왼쪽 위
    solve1(n / 2, y, x + n / 2); //오른쪽 위
    solve1(n / 2, y + n / 2, x); //왼쪽 아래
    solve1(n / 2, y + n / 2, x + n / 2); //오른쪽 아래
    cout << ")";
  }
  return;
}

void solve() {
    cin >> N;
    for (int i=0;i<N;i++) {
    string str;
    cin >> str;
    for (int j=0;j<N;j++) { 
        arr[i][j] = str[j]-'0'; // 문자열을 정수로 바꾸어서 배열에 넣기
        }
    }
    solve1(N, 0, 0);
}

int main() {
    fastIO;
    solve();
}