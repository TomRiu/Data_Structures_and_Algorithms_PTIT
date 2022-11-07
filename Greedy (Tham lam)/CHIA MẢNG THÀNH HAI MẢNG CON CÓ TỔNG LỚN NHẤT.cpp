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

int n, k;
int a[1005];

void Input()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Solve()
{
    sort(a, a + n);
    ll n1 = 0, n2 = 0;
    int x = min(k, n - k);
    for (int i = 0; i < n; i++)
    {
        if (i < x)
            n1 += a[i];
        else
            n2 += a[i];
    }
    cout << n2 - n1 << endl;
}

int main()
{
    fio();
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}