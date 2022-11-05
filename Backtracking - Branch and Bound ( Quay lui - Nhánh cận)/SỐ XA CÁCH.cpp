// Cách 1
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

char n;
int a[10];

void Input()
{
    cin >> n;
    for (int i = 0; i < 10; i++)
        a[i] = 0;
}

void Try(int i, string s = "")
{
    if (i == n - '0')
    {
        cout << s << endl;
        return;
    }
    for (char j = '1'; j <= n; j++)
    {
        if (a[j - '0'] or abs(j - s.back()) == 1) continue;
        a[j - '0'] = 1;
        Try(i + 1, s + j);
        a[j - '0'] = 0;
    }
}

void Solve()
{
    Try(0);
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
        Solve();
    }
    return 0;
}

// Cách 2
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

char n;
int a[10];
vector<string> vs[10] = {};

void Input()
{
    cin >> n;
    for (int i = 0; i < 10; i++)
        a[i] = 0;
}

void Try(int i, string s = "")
{
    if (i == n - '0')
    {
        vs[n - '0'].push_back(s);
        cout << s << endl;
        return;
    }
    for (char j = '1'; j <= n; j++)
    {
        if (a[j - '0'] or abs(j - s.back()) == 1) continue;
        a[j - '0'] = 1;
        Try(i + 1, s + j);
        a[j - '0'] = 0;
    }
}

void Solve()
{
    if (vs[n - '0'].size())
        for (string i : vs[n - '0'])
            cout << i << endl;
    else
        Try(0);
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
        Solve();
    }
    return 0;
}