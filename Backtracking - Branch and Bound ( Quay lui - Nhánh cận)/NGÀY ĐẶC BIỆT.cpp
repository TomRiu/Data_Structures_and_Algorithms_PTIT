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

vector<string> vs;

void Reset()
{
}

void Input()
{
    
}

void Try(string s = "")
{
    if (s.size() == 8) 
    {
        string tmp = s;
        tmp.insert(tmp.begin() + 2, '/');
        tmp.insert(tmp.begin() + 5, '/');
        vs.push_back(tmp);
        return;
    }
    for (int j = 0; j <= 2; j += 2)
    {
        if (s.size() == 1 and s[0] == '0')
            j = 2;
        if (s.size() == 3 and s[2] == '0')
            j = 2;

        if (s.size() == 2 and j == 2)
            continue;
        if (s.size() == 4 and j == 0)
            continue;
        Try(s + to_string(j));
    }
}

void Solve()
{
    Try();
    sort(vs.begin(), vs.end());
}

void Output()
{
    Solve();
    for (string i : vs)
        cout << i << endl;
}

int main()
{
    fio();
    faster();
    int T = 1;
    //cin >> T; cin.ignore();
    while (T--)
    {
        Reset();
        Input();
        Output();
    }
    return 0;
}