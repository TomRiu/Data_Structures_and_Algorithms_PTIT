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

string s;

void Sinh(int n)
{
    int i = n - 1;
    while(i >= 0 and s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if(i < 0) 
    {
        return;
    }
    s[i] = '0';
}

void Setup()
{
}

void Reset()
{
}

void Input()
{
    cin >> s;
    Reset();
}

void Solve()
{
    Sinh(s.size());
    cout << s;
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