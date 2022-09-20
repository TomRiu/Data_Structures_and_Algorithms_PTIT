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

int n, k, cnt = 0;
int a[50], s[50];

void Sinh()
{
    int i = k - 1;
    while(i >= 0 and s[i] == n - (k - 1) + i)
    {
        i--;
    }
    if(i < 0) 
    {
        cnt = k;
        return;
    }
    s[i++]++;
    while(i < k)
    {
        s[i] = s[i - 1] + 1;
        i++;
    }
}

void Setup()
{
}

void Reset()
{
    cnt = 0;
}

void Input()
{
    cin >> n >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> s[i];
        a[i] = s[i];
    }
    Reset();
}

int Check()
{
    int cnt = 0;
    for(int i = 0; i < k; i++)
    {
        if(!binary_search(s, s + k, a[i]))
        {
            cnt++;
        }
    }
    return cnt;
}

void Solve()
{
    Sinh();
    if(cnt > 0) cout << cnt;
    else cout << Check();
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
    Setup();
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