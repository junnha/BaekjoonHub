#include <iostream>

int main() {
    int n;
    while (1) {
        std::cin >> n;
        int sum=0;
        if(n==0) break;
        for(int i=1;i<=n;i++) {
            sum +=i;   
        }
        std::cout << sum << '\n';
    }
}