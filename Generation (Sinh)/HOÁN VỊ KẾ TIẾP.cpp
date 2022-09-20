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
int a[100005];

void Reset()
{

}

void Input()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Reset();
}

void Sinh()
{
    int i = n - 1;
    while(i >= 1 and a[i] > a[i + 1])
    {
        i--;
    }
    if(i < 1) 
    {
        sort(a + 1, a + n + 1);
        return;
    }
    int j = n;
    while(a[i] > a[j])
    {
        j--;
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);
}

void Solve()
{
    Sinh();
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
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