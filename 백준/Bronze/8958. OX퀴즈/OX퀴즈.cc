#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    for(int i=0;i<N;i++) {
        int ans=0;
        int cur=0;
        std::string s;
        std::cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == 'O') {
            cur++;
            ans += cur;
            } else {
            cur = 0;
            }
        }
            std::cout << ans << '\n';
    }
}