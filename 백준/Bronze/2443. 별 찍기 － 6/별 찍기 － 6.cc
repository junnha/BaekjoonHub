#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<i; j++) {
            std::cout << " ";
        }   for(int k=i;k<2*n-(i-1);k++) {
                std::cout << "*";
            }
        std::cout << '\n';
    }
}