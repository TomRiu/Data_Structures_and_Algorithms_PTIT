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

int n, k, stop;
int a[100005];

void Reset()
{

}

void Input()
{
    cin >> n >> k;
    stop = 0;
    for(int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    Reset();
}

void Sinh()
{
    int i = k;
    while(i >= 1 and a[i] == n - k + i)
    {
        i--;
    }
    if(i < 1) 
    {
        stop = 1;
        return;
    }
    a[i]++;
    while(i < k)
    {
        a[i + 1] = a[i] + 1;
        i++;
    }
}

void Solve()
{
    while(!stop)
    {
        for(int i = 1; i <= k; i++)
        {
            cout << a[i];
        }
        cout << " ";
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