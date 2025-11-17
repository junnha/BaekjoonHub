#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i == 0 || s[i-1] == ' ') && s[i] != ' ')
            cnt++;
    }
    cout << cnt;
}