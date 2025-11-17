#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first < b.first;
    }

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int N;
    cin >> N;
    vector<pair<int,string>> list;

    for(int i=0;i<N;i++) {
        int age;
        string name;
        cin >> age >> name;
        list.push_back({age, name});
    }

    stable_sort(list.begin(), list.end(), compare);

    for (int i = 0; i < list.size(); i++) {
    cout << list[i].first << " " << list[i].second << '\n';
    }
}   