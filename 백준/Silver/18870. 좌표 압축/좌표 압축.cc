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

int N;
int arr[1000005];
vector<int> tmp, uni;
int main(){
    fastIO;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> arr[i];
        tmp.push_back(arr[i]);
    }
    sort(tmp.begin(), tmp.end());
    
    for(int i=0;i<N;i++){
        if(i==0 || tmp[i-1]!=tmp[i])
            uni.push_back(tmp[i]);
        }
    for(int i=0;i<N;i++)
    cout << lower_bound(uni.begin(),uni.end(),arr[i])-uni.begin() << ' ';
}