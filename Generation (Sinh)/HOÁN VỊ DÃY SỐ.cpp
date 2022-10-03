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

int n, stop = 0;
int b[20] = {};
int a[20] = {};

void Reset()
{
    stop = 0;
}

void Input()
{
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    sort(a, a + n);
    Reset();
}

void Sinh()
{
    int i = n - 2;
    while(i >= 0 and b[i] > b[i + 1])
        i--;
    if(i < 0)
        stop = 1;
    else
    {
        int j = n - 1;
        while(b[i] > b[j])
            j--;
        swap(b[i], b[j]);
        reverse(b + i + 1, b + n);
    }
}

void Solve()
{
    while(!stop)
    {
        for (int i = 0; i < n; i++)
            cout << a[b[i]] << ' ';
        Sinh();
        cout << endl;
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