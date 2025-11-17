#include <iostream>
#include <vector>

int N, K, len = 0;

int pre[5001];
int nxt[5001];
std::vector<int> v;

int main(void){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> N >> K;

    for(int i = 1; i <= N; i++){
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
        len++;
        }

    int i = 1;
    for(int cur = 1; len!=0; cur = nxt[cur]) {
        if(i==K) {
            nxt[pre[cur]]=nxt[cur];
            pre[nxt[cur]]=pre[cur];
            v.push_back(cur);
            i = 1;
            len--;
        } else i++;
    }
    std::cout << "<";
    for(size_t i = 0; i < v.size(); i++) {
    std::cout << v[i];
    if(i != v.size() - 1) {
        std::cout << ", ";
        }
    }
    std::cout << ">";
}