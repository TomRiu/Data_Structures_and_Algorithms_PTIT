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

int n, s, m;

void Input()
{
    cin >> n >> s >> m;
}

void Solve()
{
    if (m > n or 7 * m > 6 * n) 
    {
        cout << -1 << endl;
        return;
    }
    float amountFood = m * s;
    int daysNeedToBuy = ceil(amountFood / n);
    int daysCanBuy = s - (s / 7);
    cout << daysNeedToBuy << endl;
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