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

int n, k;
int a[1005];
vector<int> v;
vector<string> vs;

void Reset()
{
    v.clear();
    vs.clear();
}

void Input()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Reset();
}

void Try(int i, int sum = 0)
{
    if (sum > k)
        return;
    if (sum == k)
    {
        string tmp;
        for (auto x : v)
            tmp = tmp + to_string(x) + " ";
        tmp.pop_back();
        tmp = "[" + tmp + "]";
        vs.push_back(tmp);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        v.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        v.pop_back();
    }
}

void Solve()
{
    sort(a, a + n);
    Try(0);
    for (string i : vs)
        cout << i << " ";
    if (vs.empty())
        cout << -1;
    cout << endl;
}

void Output()
{
    Solve();
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