#include <iostream>
#include <string>

int main() {
    int a,b,c;
    int ans=0;
    std::cin >> a >> b >> c;
    ans=a+b-c;
    std::string s = std::to_string(a) + std::to_string(b);
    int result = 0;
        for (char c : s) {
            result = result * 10 + (c - '0');
            }
    int ans2 = result-c;
    std::cout << ans << '\n' << ans2;
}