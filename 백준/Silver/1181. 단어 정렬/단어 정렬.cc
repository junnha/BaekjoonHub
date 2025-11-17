#include <bits/stdc++.h>
using namespace std;

bool customCompare(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    int N;
    cin >> N;

    vector<string> words;
    for (int i=0;i<N;i++) {
        string s;
        cin >> s;
        words.push_back(s); 
    }
    std::sort(words.begin(), words.end(),customCompare);
    words.erase(unique(words.begin(), words.end()), words.end());

    for (const string &word : words) {
        cout << word << '\n';
    }
}