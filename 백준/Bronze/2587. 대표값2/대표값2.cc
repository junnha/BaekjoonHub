#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b,c,d,e;
    int sum=0;
    cin >> a >> b >> c >> d >> e;
    sum = a+b+c+d+e;
    int rev = sum / 5;

    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(a > d) swap(a, d);
    if(a > e) swap(a, e);

    if(b > c) swap(b, c);
    if(b > d) swap(b, d);
    if(b > e) swap(b, e);

    if(c > d) swap(c, d);
    if(c > e) swap(c, e);

    if(d > e) swap(d, e);

    cout << rev << "\n" << c;
}