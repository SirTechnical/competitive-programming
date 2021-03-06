/*
Coin Change
Key Concepts: Dynamic Programming (golf)
https://dmoj.ca/problem/cchange
Solution by Kevin Guo
*/
#include <bits/stdc++.h>
using namespace std;

#define ms(x,a) memset(x,a,sizeof(x))
#define pb push_back
#define eb emplace_back
#define f(i,a,b) for (int i = a; i < b; i++)
#define fr(i,b,a) for (int i = b; i > a; i--)
#define vs(v) sort(v.begin(), v.end())
#define vr(v) reverse(v.begin(), v.end())
#define fi first
#define se second
#define fio cin.tie(0); cout.tie(0); ios::sync_with_stdio(0)
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef priority_queue<int> pqi;
const int MOD = 1e9+7, INF = 0x3f3f3f3f, MAXN = 1e4+5; 

int dp[MAXN];

int main() {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    int n, c, x; cin >> n >> c;
    ms(dp, INF);
    dp[0] = 0;
    f(i,0,c){
        cin >> x;
        f(i,0,n-x+1){
            if (dp[i] != INF) {
                dp[i+x] = min(dp[i+x], dp[i] + 1);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}