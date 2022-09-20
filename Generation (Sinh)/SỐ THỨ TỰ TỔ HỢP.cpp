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

int n, k;
int a[20];

void Reset()
{

}

void Input()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> a[i];
    Reset();
}

void Sinh(int x[])
{
    int i = k - 1;
    while(i >= 0 and x[i] == n - (k - 1) + i)
        i--;
    if(i < 0)
        return;
    x[i++]++;
    while(i < k)
    {
        x[i] = x[i - 1] + 1;
        i++;
    }
}

bool Check(int x[])
{
    for (int i = 0; i < k; i++)
        if(a[i] != x[i])
            return true;
    return false;
}

void Solve()
{
    int b[20];
    for (int i = 0; i < k; i++)
    {
        b[i] = i + 1;
    }
    int cnt = 1;
    while(Check(b))
    {
        Sinh(b);
        cnt++;
    }
    cout << cnt;
}

void Output()
{
    Solve();
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
        // Reset();
        Input();
        Output();
    }
    return 0;
}