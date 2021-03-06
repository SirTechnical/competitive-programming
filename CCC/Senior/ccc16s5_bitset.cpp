/*
CCC '16 S5 - Circle of Life
Key Concepts: Simulation, Boolean Algebra
https://dmoj.ca/problem/ccc16s5
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

int n; 
ll d;

int p(int x, ll y) {
    y %= n;
    return (x + y + n) % n;
}

int main() {
    fio;

    cin >> n >> d;
    string s; cin >> s;
    bitset<MAXN> c(s);
    bitset<MAXN> t;

    ll a = 1;
    while (d > 0) {
        if (d & 1) {
            f(i,0,n) t[i] = c[p(i,a)] ^ c[p(i,-a)];
            c = t;
        }
        d >>= 1;
        a <<= 1;
    }

    cout << c.to_string().substr(MAXN-n) << "\n";

    return 0;
}