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

string s;
int a[11] = {};
int Bool[11] = {};

void Reset()
{
}

void Input()
{
    cin >> s;    
    Reset();
}

void Try(int i)
{
    for (int j = 0; j < s.size(); j++)
    {
        if (!Bool[j])
        {
            a[i] = j;
            Bool[j] = 1;
            if (i == s.size() - 1)
            {
                for (int k = 0; k < s.size(); k++)
                    cout << s[a[k]];
                cout << " ";
            }
            else 
                Try(i + 1);
            Bool[j] = 0;
        }
    }
}

void Solve()
{
    Try(0);        
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
        Input();
        Output();
    }
    return 0;
}