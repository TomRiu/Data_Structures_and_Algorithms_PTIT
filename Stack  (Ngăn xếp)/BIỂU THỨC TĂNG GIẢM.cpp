//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#pragma GCC optimize("Ofast")
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

string s;

void input()
{
    cin >> s;
}

void output()
{
    stack<int> st;
    int a[s.size() + 1] = {};
    int Number = s.size() + 1;
    s = "I" + s;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == 'D')
        {
            st.push(i);
        }
        else if(s[i] == 'I')
        {
            a[i] = Number--;
            while(st.size())
            {
                a[st.top()] = Number--;
                st.pop();
            }
        }
    }
    for(int i : a) cout << i;
    cout << endl;
}

int main()
{
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while (T--)
    {
        input();
        output();
    }
    return 0;
}