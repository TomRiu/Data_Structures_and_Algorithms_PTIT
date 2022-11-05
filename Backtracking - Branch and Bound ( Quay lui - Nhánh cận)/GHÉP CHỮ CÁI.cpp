// Cách 1
// #Created by Tôm Riu
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

char c;
int k;
vector<string> vs;
unordered_map<char, int> um;

void Input()
{
    cin >> c;
}

void Try(int i, string s = "")
{
    if (i == k)
    {
        vs.push_back(s);
        return;
    }
    for (int j = 'A'; j <= c; j++)
    {
        if (um[(char) j]) continue;
        um[(char) j] = 1;
        Try(i + 1, s + (char) j);
        um[(char) j] = 0;
    }
}

int Check(string i)
{
    int idxA = -1, idxE = -1;
    for (int j = 0; j < i.size(); j++)
    {
        if (i[j] == 'A') idxA = j;
        else if (i[j] == 'E') idxE = j;
    }
    if (idxA == 0 or idxA == k - 1)
    {
        if (idxE == -1 or idxE == 0 or idxE == k - 1)
            return 1;
    }
    if (idxE == 0 or idxE == k - 1)
    {
        if (idxA == -1 or idxA == 0 or idxA == k - 1)
            return 1;
    }
    if (idxE != -1 and abs(idxA - idxE) == 1)
        return 1;
    return 0;
}

void Solve()
{
    k = c - 'A' + 1;
    Try(0);
    sort(vs.begin(), vs.end());
    for (string i : vs)
        if (Check(i))
            cout << i << endl;
}

int main()
{
    fio();
    faster();
    int T = 1;
    // cin >> T; cin.ignore();
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}

// Cách 2
// #Created by Tôm Riu
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

char c;
int k;
vector<string> vs;
unordered_map<char, int> um;

void Input()
{
    cin >> c;
}

void Try(int i, string s = "")
{
    if (i == k)
    {
        vs.push_back(s);
        return;
    }
    for (int j = 'A'; j <= c; j++)
    {
        if (um[(char) j]) continue;

        if (i > 0 and i < k - 1)
        {
            if (j == 'A' or j == 'E')
            {
                if (c >= 'E')
                {
                    if (um['A'] == 0 and um['E'] == 0)
                    {
                        um['A'] = um['E'] = 1;
                        if (j == 'A')
                            Try(i + 2, s + "AE");
                        else if (j == 'E')
                            Try(i + 2, s + "EA");
                        um['A'] = um['E'] = 0;
                    }
                    else if (s.back() == 'A' or s.back() == 'E')
                    {
                        um[(char) j] = 1;
                        Try(i + 1, s + (char) j);
                        um[(char) j] = 0;
                    }
                }
                else continue;
                continue;
            }
        }

        um[(char) j] = 1;
        Try(i + 1, s + (char) j);
        um[(char) j] = 0;
    }
}

void Solve()
{
    k = c - 'A' + 1;
    Try(0);
    sort(vs.begin(), vs.end());
    for (string i : vs)
        cout << i << endl;
}

int main()
{
    fio();
    faster();
    int T = 1;
    // cin >> T; cin.ignore();
    while (T--)
    {
        Input();
        Solve();
    }
    return 0;
}