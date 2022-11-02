//#Created by Tôm Riu
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

int n;
int a[10005];

void Input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void SelectionSort()
{
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i + 1, Min = a[i + 1];
        for (int j = i + 1; j < n; j++)
            if (a[j] < Min)
                Min = a[j], idx = j;
        if (a[i] > a[idx])
            swap(a[i], a[idx]);
        cout << "Buoc " << i + 1 << ": ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

void Output()
{
    SelectionSort();
}

int main()
{
    faster();
    fio();
    int T = 1;
    // cin >> T; cin.ignore();
    while (T--)
    {
        Input();
        Output();
    }
    return 0;
}