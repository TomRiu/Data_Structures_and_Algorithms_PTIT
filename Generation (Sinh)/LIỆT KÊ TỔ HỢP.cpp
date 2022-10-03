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

int n, k, stop = 0;
int a[(int) 1e6 + 5] = {}, b[30] = {}, f[(int) 1e6 + 5] = {};

void Reset()
{
    stop = 0;
}

void Input()
{
    cin >> n >> k;
    int x, i = 0; 
    while(cin >> x)
    {
        if(f[x]) continue;
        a[i++] = x;
        f[x]++;
    }
    n = i - 1;
    sort(a, a + n + 1);
    Reset();
}

void Sinh()
{
    int i = k - 1;
    while(i >= 0 && b[i] == n - k + 1 + i)
        i--;
    if(i < 0)
        stop = 1;
    else
    {
        b[i++]++;
        while(i < k)
            b[i++] = b[i - 1] + 1;
    }
}

void Solve()
{
    for(int i = 0; i < n; i++)
        b[i] = i;
    while(!stop)
    {
        for (int i = 0; i < k; i++)
            cout << a[b[i]] << ' ';
        Sinh();
        cout << endl;
    }
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