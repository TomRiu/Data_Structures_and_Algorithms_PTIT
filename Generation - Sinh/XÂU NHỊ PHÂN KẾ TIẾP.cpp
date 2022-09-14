//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#pragma GCC optimize("Ofast")
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

int main()
{
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while (T--)
    {
        string s;
        cin >> s;
        int i = s.size() - 1;
        while(i >= 0 and s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        if(i != -1) s[i] = '1';
        cout << s << endl;
    }
    return 0;
}