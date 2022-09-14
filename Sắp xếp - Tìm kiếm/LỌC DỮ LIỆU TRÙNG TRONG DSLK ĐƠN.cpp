//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
//#pragma GCC optimize("Ofast")
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
vector<int> v;
int f[100005] = {};

void Reset()
{
}

void Input()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(f[x] == 0)
        {
            cout << x << " ";
            f[x] = 1;
        }
    }
    Reset();
}

void Solve()
{

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
    // cin >> T; cin.ignore();
    while (T--)
    {
        // Reset();
        Input();
        Output();
    }
    return 0;
}