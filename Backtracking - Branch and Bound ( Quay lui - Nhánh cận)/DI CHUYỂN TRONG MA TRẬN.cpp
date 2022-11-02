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

int n, m, cnt;
int a[105][105];

void Reset()
{
    cnt = 0;
}

void Input()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

void Try(int i, int j)
{
    if (i == n and j == m) cnt++;
    if (i < n) Try(i + 1, j);
    if (j < m) Try(i, j + 1);  
}

void Solve()
{
    Try(1, 1);
}

void Output()
{
    Solve();
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
        Reset();
        Input();
        Output();
    }
    return 0;
}