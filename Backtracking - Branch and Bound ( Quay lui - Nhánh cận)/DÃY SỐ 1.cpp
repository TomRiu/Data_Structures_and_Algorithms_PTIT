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
int a[100005];

void Reset()
{
    
}

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Reset();
}

void Try(int i)
{
    if(i == 0) return;
    int j = 0;
    cout << "[";
    for (; j < i - 1; j++)
    {
        a[j] = a[j] + a[j + 1];
        cout << a[j] << " ";
    }
    a[j] = a[j] + a[j + 1];
    cout << a[j] << "]" << endl;
    Try(i - 1);
}

void Solve()
{
    cout << "[";
    for (int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1] << "]" << endl;
    Try(n - 1);
}

void Output()
{
    Solve();
    // cout << endl;
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