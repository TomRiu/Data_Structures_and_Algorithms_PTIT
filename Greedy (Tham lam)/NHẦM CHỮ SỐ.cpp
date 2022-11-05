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

string a, b;

void Input()
{
    cin >> a >> b;
}

void Solve()
{
    ll xMin = 0, yMin = 0, xMax = 0, yMax = 0; 
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '5' or a[i] == '6') 
        {
            xMin = xMin * 10 + 5;
            xMax = xMax * 10 + 6;
        }
        else
        {
            xMin = xMin * 10 + (a[i] - '0');
            xMax = xMax * 10 + (a[i] - '0');
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '5' or b[i] == '6') 
        {
            yMin = yMin * 10 + 5;
            yMax = yMax * 10 + 6;
        }
        else
        {
            yMin = yMin * 10 + (b[i] - '0');
            yMax = yMax * 10 + (b[i] - '0');
        }
    }
    cout << xMin + yMin << " " << xMax + yMax;
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