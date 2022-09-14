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

int n, stop;
string s;

void Reset()
{
    s = "";
}

void Input()
{
    cin >> n;
    Reset();
    stop = 0;
    for(int i = 1; i <= n; i++)
    {
        s = s + "A";
    }
}

void Sinh()
{
    int i = n - 1;
    while(i >= 0 and s[i] == 'B')
    {
        s[i] = 'A';
        i--;
    }
    if(i < 0) 
    {
        stop = 1;
        return;
    }
    s[i] = 'B';
}

void Solve()
{
    while(!stop)
    {
        cout << s << " ";
        Sinh();
    }
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