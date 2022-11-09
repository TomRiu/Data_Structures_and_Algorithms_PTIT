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

int n, m, k;
vector<int> v;
unordered_map<int, int> um1, um2;

void Input()
{
    cin >> n >> m >> k;
    v.clear();
    um1 = um2 = {};
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        um1[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        um2[x]++;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (um1[x] > 0 and um2[x] > 0)
        {
            um1[x]--;
            um2[x]--;
            v.push_back(x);
        }
    }
}

void Solve()
{
    if (v.empty())
    {
        cout << "NO" << endl;
        return;
    }
    for (int i : v)
        cout << i << " ";
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