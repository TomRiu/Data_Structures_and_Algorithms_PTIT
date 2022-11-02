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

int n;
int a[30] = {};
vector<int> v;
vector<string> vs;

void Reset()
{

}

void Input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Reset();
}

void Try(int i)
{
    for (int j = i + 1; j <= n; j++)
    {
        if (a[j] > a[i])
        {
            v.push_back(a[j]);
            if (v.size() > 1) 
            {
                string s;
                for (int i : v)
                    s += to_string(i) + " ";
                vs.push_back(s);
            } 
            Try(j);
            v.pop_back();
        }
    }
}

void Solve()
{
    Try(0);
    sort(vs.begin(), vs.end());
    for (string i : vs)
        cout << i << endl;
}

void Output()
{
    Solve();
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