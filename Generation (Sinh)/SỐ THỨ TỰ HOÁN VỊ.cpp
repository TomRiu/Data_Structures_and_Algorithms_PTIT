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

int n, stop,cnt = 0;
string s, a;

void Sinh(int n, string &s)
{
    int i = n - 2;
    while(i >= 0 and s[i] > s[i + 1])
    {
        i--;
    }
    if(i < 0) 
    {
        return;
    }
    int j = n - 1;
    while(s[i] > s[j])
    {
        j--;
    }
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
}

void Setup()
{
}

void Reset()
{
    cnt = 0;
    a = "";
}

void Input()
{
    cin >> n; cin.ignore();
    getline(cin, s);
    Reset();
    stringstream ss(s);
    while(ss >> s)
    {
        a += s;
    }
}


void Solve()
{
    string tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp += to_string(i);
    }
    int cnt = 0;
    while(tmp != a)
    {
        cnt++;
        Sinh(n, tmp);
    }
    cout << cnt + 1;
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