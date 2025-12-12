#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr)

bool isNumber(string s) {
    if(s.empty()) return false;
    for(char c:s) {
        if(isdigit(c)== 0) return false;
    }
    return true;
}


int main() {
    fastIO;
    string a;
    string b;
    string c;
    cin >> a >> b >> c;
    
    int N;
    if(isNumber(a)) {
        N = stoi(a) + 3;
    }
    if(isNumber(b)) {
        N = stoi(b) + 2;
    }
    if(isNumber(c)) {
        N = stoi(c)+1;
    }
    if((N%15) == 0) cout << "FizzBuzz";
    if((N%3)==0 &&(N%5)!=0 ) cout << "Fizz";
    if((N%3)!=0 &&(N%5)==0 ) cout << "Buzz";
    if((N%3)!=0 &&(N%5)!=0 ) cout << N;
}