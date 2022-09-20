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

int n, stop, k;
string s;
vector<string> vs[20];

void Sinh(int n)
{
    int i = n - 1;
    while(i >= 0 and s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if(i < 0) 
    {
        stop = 1;
        return;
    }
    s[i] = '1';
}

void Setup()
{
    for(int i = 1; i <= 16; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            s = s + "0";
        }
        while(!stop)
        {
            vs[i].push_back(s);
            Sinh(i);
        }
        stop = 0;
        s = "";
    }
}

void Reset()
{
}

void Input()
{
    cin >> n >> k;
    Reset();
}

int Check(string s, int k)
{
    for(char i : s)
    {
        if(i == '1')
        {
            k--;
        }
    }
    return k == 0;
}

void Solve()
{
    for(int i = 0; i < vs[n].size(); i++)
    {
        if(Check(vs[n][i], k))
        {
            cout << vs[n][i] << endl;
        }
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