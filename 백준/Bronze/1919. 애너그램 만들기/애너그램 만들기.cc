#include <iostream>
#include <string>

int main () {
    std::string s;
    std::string s1;
    std::cin >> s;
    std::cin >> s1;
    int arr[26]={};
    int cnt=0;

    for (char c : s) arr[c - 'a']++;
    for (char c : s1) arr[c - 'a']--;

    for(int i=0;i<26;i++) {
        cnt += std::abs(arr[i]);
    }
    std::cout << cnt;
}