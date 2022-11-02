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

char c;
int k;

void Input()
{
    cin >> c >> k;
}

void Try(int i, char z, string s = "")
{
    if (i == k)
    {
        cout << s << endl;
        return;
    }
    for (int j = 'A' + (z - 'A'); j <= c; j++)
    {
        Try(i + 1, (char) j, s + (char) j);
    }
}

void Solve()
{
    Try(0, 'A');
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