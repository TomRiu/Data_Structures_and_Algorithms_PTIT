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
int a[15][15];
vector<string> v;

void Reset()
{
    v.clear();
}

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    Reset();
}

void Try(int i, int j, string s = "")
{
    if (i == n - 1 and j == n - 1) 
    {
        v.push_back(s);
        return;
    }
    if (j + 1 < n and a[i][j + 1])
        Try(i, j + 1, s + "R");
    if (i + 1 < n and a[i + 1][j])
        Try(i + 1, j, s + "D");
}

void Solve()
{
    Try(0, 0);
    if(!a[0][0] || v.empty())
    {
        cout << -1;
        return;
    }
    sort(v.begin(), v.end());
    for (string s : v)
        cout << s << " ";
}

void Output()
{
    Solve();
    cout << endl;
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
        Output();
    }
    return 0;
}
