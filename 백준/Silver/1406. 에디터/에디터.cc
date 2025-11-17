#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, char num){
    dat[unused] = num;                    // 새로운 노드에 값 저장
    pre[unused] = addr;                     // 이전 노드는 addr
    nxt[unused] = nxt[addr];                // 다음 노드는 addr의 다음 노드 (기존 링크 유지)
    
    if(nxt[addr] != -1){                // addr 뒤에 뭔가 있으면,
        pre[nxt[addr]] = unused;            // addr의 다음 노드의 pre를 새 노드로 갱신
        }
    nxt[addr] = unused;                     // addr의 다음 노드를 새 노드로 갱신
    unused++;                               // 다음 사용될 인덱스로 이동
}

void erase(int addr){
    nxt[pre[addr]]=nxt[addr];
    if(nxt[addr] != -1) {
        pre[nxt[addr]]=pre[addr];
    }
}

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
}

int main() {
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);

    string s;
    cin >> s;
    
    int cursor = 0;
    for (auto c : s) {
        insert (cursor,c);
        cursor++;
    }

    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        char p;
        cin >> p;
        if (p == 'P') {
            char add;
            cin >> add;
            insert(cursor,add);
            cursor = nxt[cursor];
        } else if (p =='L') {
            if(pre[cursor] != -1) {
                cursor = pre[cursor];
            }
        } else if (p == 'D') {
            if(nxt[cursor] != -1) {
                cursor = nxt[cursor];
            }
        } else {
            if(pre[cursor]!=-1) {
                erase(cursor);
                cursor = pre[cursor];
            }
        }
    }
    traverse();
}