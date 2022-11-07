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
pair<int, int> p[1005];

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first;
    for (int i = 0; i < n; i++)
        cin >> p[i].second;
}

int cmp(pair<int, int> x, pair<int, int> y)
{
    return x.second < y.second;
}

void Solve()
{
    sort(p, p + n, cmp);
    int cnt = 0, f = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first >= f)
        {
            cnt++;
            f = p[i].second;
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