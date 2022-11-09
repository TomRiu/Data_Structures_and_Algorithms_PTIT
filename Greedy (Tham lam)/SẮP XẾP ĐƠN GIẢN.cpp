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
int a[(int) 1e6 + 5];

void Input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void Solve()
{
    int pos[n + 1] = {};
    for (int i = 1; i <= n; i++)
        pos[a[i]] = pos[a[i] - 1] + 1; // Dãy số liên tiếp tăng dần
    cout << n - *max_element(pos, pos + n + 1);
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