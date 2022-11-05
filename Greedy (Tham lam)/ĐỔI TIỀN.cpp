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
int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Input()
{
    cin >> n;
}

void Solve()
{
    int cnt = 0;
    for (int i = 9; i >= 0; i--)
    {
        if (n >= a[i])
        {
            cnt += n / a[i];
            n %= a[i];
            if (n == 0) break;
        }
    }
    cout << cnt << endl;
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