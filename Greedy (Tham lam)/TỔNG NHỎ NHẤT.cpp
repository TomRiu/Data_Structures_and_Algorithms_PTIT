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
int a[25];

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Solve()
{
    sort(a, a + n);
    ll n1 = 0, n2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            n1 = n1 * 10 + a[i];
        else
            n2 = n2 * 10 + a[i];
    }
    cout << n1 + n2 << endl;
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