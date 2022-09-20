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
    //cin >> T; cin.ignore();
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        int x;
        cin >> x;
        for(int i : a)
        {
            if(i != x)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}