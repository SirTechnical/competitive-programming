// https://dmoj.ca/problem/ccc13j1
#include <bits/stdc++.h>
using namespace std;

#define ms(x,a) memset(x,a,sizeof(x))
#define pb(x) push_back(x)
#define f(i,a,b) for (int i = a; i < b; i++)
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;
    cout << 2*b-a << endl;

    return 0;
}