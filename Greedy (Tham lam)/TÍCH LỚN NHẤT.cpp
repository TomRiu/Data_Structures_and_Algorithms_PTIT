// #Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
// #pragma GCC optimize("Ofast")
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define fio()                               \
    if (fopen("input.txt", "r"))            \
    {                                       \
        freopen("input.txt", "r", stdin);   \
        freopen("output.txt", "w", stdout); \
    }
const ll MOD = 1e9 + 7;
using namespace std;

int n;
ll a[(int) 1e6 + 5] = {};

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int cmp(ll a, ll b)
{
    return a > b;
}

void Solve()
{
    sort(a, a + n, cmp);
    cout << max({
        a[0] * a[1],
        a[n - 1] * a[n - 2],
        a[0] * a[1] * a[2],
        a[0] * a[n - 1] * a[n - 2]
    });
}

int main()
{
    fio();
    faster();
    int T = 1;
    // cin >> T; cin.ignore();
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}