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
priority_queue<int, vector<int>, greater<int>> pq;

void Input()
{
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(x);
    }
}

void Solve()
{
    ll cost = 0;
    while (pq.size() > 1)
    {
        ll r1 = pq.top();
        pq.pop();
        ll r2 = pq.top();
        pq.pop();
        pq.push(r1 + r2);
        cost += r1 + r2;
    }
    pq.pop();
    cout << cost << endl;
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