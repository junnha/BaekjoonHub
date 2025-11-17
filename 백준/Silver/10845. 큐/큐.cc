#include<iostream>
#include<queue>
#include<vector>
#include<string>

std::queue<int>Q;

int main () {
    int N;
    std::cin >> N;
    for(int i=0;i<N;i++) {
        std::string q;
        std::cin >> q;
        if(q == "push") {
            int k;
            std::cin >> k;
            Q.push(k);
        } else if (q == "pop") {
            if(Q.empty()) {
                std::cout << -1 << '\n';
            } else {std::cout << Q.front() << '\n';
            Q.pop();
            }
        } else if (q == "size") {
            std::cout << Q.size() << '\n';
        } else if (q == "empty") {
            if(Q.empty()) {
                std::cout << 1 << '\n';
            } else {
                std::cout << 0 << '\n';
            }
        } else if (q == "front") {
            if(Q.empty()) {
                std::cout << -1 << '\n';
            } else std::cout << Q.front() << '\n';
        } else if (q == "back") {
            if(Q.empty()) {
                std::cout << -1 << '\n';
            } else std::cout << Q.back() << '\n';
        }
    }
}