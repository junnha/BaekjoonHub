#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<int> count(10, 0);

    for (char c : s) {
        count[c - '0']++;
    }

    count[6] = (count[6] + count[9] + 1) / 2;

    count[9] = 0;

    std::cout << *std::max_element(count.begin(), count.end());
}