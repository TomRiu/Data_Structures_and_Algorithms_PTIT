//#Created by Tôm Riu
#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")

#define endl '\n'
#define ll long long
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

int n, cnt;
int x[15], cot[15], cheo1[30], cheo2[30];

bool check(int i, int j)
{
    if(cot[j] && cheo2[i - j + n] && cheo1[i + j - 1])
        return true;
    return false;
}

void Try(int i)
{
    for(int j = 0; j < n; j++)
    {
        if(check(i, j))
        {
            cot[j] = cheo2[i - j + n] = cheo1[i + j - 1] = 0;
            x[i] = j;
            if(i == n)
                cnt++;
            else
                Try(i + 1);
            cot[j] = cheo2[i - j + n] = cheo1[i + j - 1] = 1;
        }
    }
}

int main()
{
    fio();
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while (T--)
    {
        cnt = 0;
        fill(x, x + 15, 0);
        fill(cot, cot + 15, 1);
        fill(cheo1, cheo1 + 30, 1);
        fill(cheo2, cheo2 + 30, 1);
        cin >> n;
        Try(1);
        cout << cnt << endl;
    }
    return 0;
}