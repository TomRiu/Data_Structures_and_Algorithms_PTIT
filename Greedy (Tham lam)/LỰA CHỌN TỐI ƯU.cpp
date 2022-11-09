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
pair<int, int> p[(int) 1e6 + 5];

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

void Solve()
{
    sort(p, p + n, cmp);
    int f = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first >= f)
        {
            f = p[i].second;
            cnt++;
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