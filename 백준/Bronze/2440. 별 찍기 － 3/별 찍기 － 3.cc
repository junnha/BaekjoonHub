#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i=1;i<=n;i++) {
        for (int j=i;j<=n;j++) {
            std::cout << "*";
        }
        std::cout << '\n';
    }
}