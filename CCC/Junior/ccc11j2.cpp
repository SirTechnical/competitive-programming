/*
CCC '11 J2 - Who Has Seen The Wind
Key Concepts: Implementation, Simple Math
https://dmoj.ca/problem/ccc11j2
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
const int MOD = 1e9+7, INF = 0x3f3f3f3f, MAXN = 1e5+5; 

int main() {
    fio;

    int h, m; cin >> h >> m;
    f(t,1,m+1){
        if ((-6) * t*t*t*t + h * t*t*t + 2 * t*t + t <= 0) {
            cout << "The balloon first touches ground at hour:" << endl << t << endl;
            return 0;
        }
    }
    cout << "The balloon does not touch ground in the given time." << endl;

    return 0;
}