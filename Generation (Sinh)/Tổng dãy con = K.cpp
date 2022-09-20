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
int a[100005];
vector<string> vs;

void Reset()
{
}

void Input()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Reset();
}

void Sinh()
{
    int b[n] = {};
    while(1)
    {
        string s;
        int i = n - 1;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == 0) continue;
            sum = sum + a[i];
            s = s + to_string(a[i]) + " ";
        }
        while(b[i] == 1)
        {
            b[i] = 0;
            i--;
        }
        if(sum == k) vs.push_back(s);
        if(i < 0) return;
        b[i] = 1;
    }
}

void Solve()
{
    Sinh();
    for(int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
    }
    cout << vs.size();
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
    // cin >> T; cin.ignore();
    while (T--)
    {
        // Reset();
        Input();
        Output();
    }
    return 0;
}