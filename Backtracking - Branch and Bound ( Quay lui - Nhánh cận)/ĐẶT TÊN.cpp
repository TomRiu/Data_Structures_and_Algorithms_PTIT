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

int n, k, stop = 0;
string a[35] = {};
vector<string> vs;
unordered_map<string, int> um;

void Reset()
{

}

void Input()
{
    cin >> n >> k; cin.ignore();
    string tmp;
    int i = 0;
    while(cin >> tmp)
    {
        if(um[tmp]) continue;
        a[i++] = tmp;
        um[tmp] = 1;
    }
    sort(a, a + i);
    n = i;
    Reset();
}

void Try(int x[], int i, string tmp = "")
{
    for (int j = x[i - 1]; j <= n - k + i; j++)
    {
        x[i] = j + 1;
        if (i == k) 
            vs.push_back(tmp + a[j - 1]);
        else 
            Try(x, i + 1, tmp + a[j - 1] + " ");
    }
}

void Solve()
{
    int b[20];
    for (int i = 0; i < k; i++)
        b[i] = i + 1;
    Try(b, 1);
    sort(vs.begin(), vs.end());
    for (auto i : vs)
        cout << i << endl;
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