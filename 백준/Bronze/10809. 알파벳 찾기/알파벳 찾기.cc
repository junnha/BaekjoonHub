#include<iostream>
#include<string>

int main() {
    std::string s;
    std::cin >> s;
    int arr[26]={};
    std::fill(arr, arr + 26, -1);

    for(int i = 0; i < s.length(); i++) {
        int x = s[i] - 'a';
        if(arr[x] == -1) {
            arr[x] = i;
        }
    }
    for(int i = 0; i < 26; i++) {
        std::cout << arr[i] << ' ';
    }

}