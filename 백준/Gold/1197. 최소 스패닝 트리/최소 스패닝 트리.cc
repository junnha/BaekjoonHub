#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int a, b, w;
};

int p[1000005];

int find(int x) {
    if (p[x] == x) return x;
    return p[x] = find(p[x]);
}

void Merge(int a, int b) {
    int x = find(a);
    int y = find(b);
    if (x > y) p[x] = y;
    else p[y] = x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E;
    cin >> V >> E;
    vector<Edge> e;
    
    for (int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        e.push_back({a, b, c});
    }
    
    for (int i = 1; i <= V; i++) p[i] = i;

    sort(e.begin(), e.end(), [](Edge &a, Edge &b) {
        return a.w < b.w;
    });
    int total = 0;
    for (auto &edge: e) {
        if (find(edge.a) != find(edge.b)) {
            Merge(edge.a, edge.b);
            total += edge.w;
        }
    }
    cout << total;
}