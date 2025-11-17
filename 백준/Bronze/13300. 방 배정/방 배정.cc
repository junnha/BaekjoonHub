#include<iostream>
using namespace std;

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int N, K, ans=0;
    int s[2][7]={};

    std::cin >> N >> K;
    for(int i=0;i<N;i++) {
        int a,b;
        cin >> a >> b;
        s[a][b]++;
    }

  for (int i=0; i<2; i++) {
    for (int j=1; j<7; ++j) {
      ans += s[i][j] / K;
      if (s[i][j] % K) ++ans;
    }
  }
  cout << ans;
}