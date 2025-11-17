#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        list<char> L;
        auto cursor = L.begin();

        for (char ch : s) {
            if (ch == '<') {
                if (cursor != L.begin()) cursor--;
            } else if (ch == '>') {
                if (cursor != L.end()) cursor++;
            } else if (ch == '-') {
                if (cursor != L.begin()) {
                    cursor--;
                    cursor = L.erase(cursor);
                }
            } else {
                L.insert(cursor, ch);
            }
        }

        for (char c : L) cout << c;
        cout << '\n';
    }
}