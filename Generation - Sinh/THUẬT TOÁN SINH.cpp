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
vector<string> vs;

void Reset()
{
}

void Input()
{
    cin >> n;
    Reset();
}

void Sinh()
{
    string s(n / 2, '0');
    if (n % 2 == 0)
    {
        string tmp = s, tmp2;
        reverse(tmp.begin(), tmp.end());
        for (int i = 0; i < tmp.size(); i++)
        {
            tmp2 = tmp2 + tmp[i] + " ";
        }
        for (int i = 0; i < s.size(); i++)
        {
            tmp2 = tmp2 + s[i] + " ";
        }
        vs.push_back(tmp2);
    }
    else
    {
        string tmp = s, tmp2;
        reverse(tmp.begin(), tmp.end());

        for (int i = 0; i < tmp.size(); i++)
        {
            tmp2 = tmp2 + tmp[i] + " ";
        }
        tmp2 += "0 ";
        for (int i = 0; i < s.size(); i++)
        {
            tmp2 = tmp2 + s[i] + " ";
        }
        vs.push_back(tmp2);
        tmp2 = "";
        for (int i = 0; i < tmp.size(); i++)
        {
            tmp2 = tmp2 + tmp[i] + " ";
        }
        tmp2 += "1 ";
        for (int i = 0; i < s.size(); i++)
        {
            tmp2 = tmp2 + s[i] + " ";
        }
        vs.push_back(tmp2);
    }
    while (1)
    {
        int i = s.size() - 1;
        while (s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        if (i < 0)
            return;
        s[i] = '1';
        if (n % 2 == 0)
        {
            string tmp = s, tmp2;
            reverse(tmp.begin(), tmp.end());
            for (int i = 0; i < tmp.size(); i++)
            {
                tmp2 = tmp2 + tmp[i] + " ";
            }
            for (int i = 0; i < s.size(); i++)
            {
                tmp2 = tmp2 + s[i] + " ";
            }
            vs.push_back(tmp2);
        }
        else
        {
            string tmp = s, tmp2;
            reverse(tmp.begin(), tmp.end());

            for (int i = 0; i < tmp.size(); i++)
            {
                tmp2 = tmp2 + tmp[i] + " ";
            }
            tmp2 += "0 ";
            for (int i = 0; i < s.size(); i++)
            {
                tmp2 = tmp2 + s[i] + " ";
            }
            vs.push_back(tmp2);
            tmp2 = "";
            for (int i = 0; i < tmp.size(); i++)
            {
                tmp2 = tmp2 + tmp[i] + " ";
            }
            tmp2 += "1 ";
            for (int i = 0; i < s.size(); i++)
            {
                tmp2 = tmp2 + s[i] + " ";
            }
            vs.push_back(tmp2);
        }
    }
}

void Solve()
{
    Sinh();
    sort(vs.begin(), vs.end());
    for(int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << endl;
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
    // cin >> T; cin.ignore();
    while (T--)
    {
        // Reset();
        Input();
        Output();
    }
    return 0;
}