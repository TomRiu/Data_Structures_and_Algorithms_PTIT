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

int k, stop = 0;
int b[20] = {};
char a[2] = {};

void Reset()
{
    stop = 0;
}

void Input()
{
    cin >> k;
    a[0] = '6';
    a[1] = '8';
    Reset();
}

void Sinh()
{
    int i = k - 1;
    while(i >= 0 and b[i] == 1)
        b[i--] = 0;
    if(i < 0)
        stop = 1;
    else
        b[i] = 1;
}

bool Check(string s)
{
    if(s[0] != '8') 
        return false;
    if(s.back() != '6')
        return false;
    int cnt6 = 0, cnt8 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '8')
        {
            if(cnt6 > 3 || cnt8 > 1) 
                return false;
            cnt6 = 0;
            cnt8++;
        }
        if(s[i] =='6')
        {
            cnt8 = 0;
            cnt6++;
        }
        if(cnt6 > 3 || cnt8 > 1)
            return false;
    }
    return true;
}

void Solve()
{
    b[0] = 1;
    string tmp = "";
    vector<string> vs;
    while(!stop)
    {
        for (int i = 0; i < k; i++)
            tmp = tmp + a[b[i]];
        if(Check(tmp))
            vs.push_back(tmp);
        Sinh();
        tmp = "";
    }
    sort(vs.begin(), vs.end());
    for (auto i : vs)
        cout << i << endl;
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