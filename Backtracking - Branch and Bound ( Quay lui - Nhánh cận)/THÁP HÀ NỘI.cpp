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
char a = 'A', b = 'B', c = 'C';

void Reset()
{

}

void Input()
{
    cin >> n;
    Reset();
}

void Solve(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Solve(n - 1, a, c, b);
    Solve(1, a, b, c);
    Solve(n - 1, b, a, c);
}

void Output()
{
    Solve(n, a, b, c);
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