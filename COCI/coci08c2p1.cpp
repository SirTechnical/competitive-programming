/*
COCI '08 Contest 2 #1 Kornislav
Key Concepts: Implementation
https://dmoj.ca/problem/coci08c2p1
Solution by Kevin Guo
*/
#include <bits/stdc++.h>
using namespace std;

#define ms(x,a) memset(x,a,sizeof(x))
#define pb push_back
#define eb emplace_back
#define f(i,a,b) for (int i = a; i < b; i++)
#define fr(i,b,a) for (int i = b; i > a; i--)
#define sv(v) sort(v.begin(), v.end())
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
const int MOD = 1e9+7, INF = 0x3f3f3f3f, MAXN = 1e3+5;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    vi v;
    f(i,0,4){
        cin>>n;
        v.pb(n);
    }
    sv(v);
    cout << min(v[0],v[1]) * min(v[2],v[3]) << endl;
    return 0;
}