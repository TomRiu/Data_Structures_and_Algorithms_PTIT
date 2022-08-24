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

int solve()
{
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')')
        {
            if(st.size())
            {
                if(st.top() != '(') return 1;
                else st.pop();
            }
        }
        else if(s[i] == ']')
        {
            if(st.size())
            {
                if(st.top() != '[') return 1;
                else st.pop();
            }
        }
        else if(s[i] == '}')
        {
            if(st.size())
            {
                if(st.top() != '{') return 1;
                else st.pop();
            }
        }
        else st.push(s[i]);
    }
    return 0;
}

void output()
{
    if(solve()) cout << "NO";
    else cout << "YES";
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
        cout << endl;
    }
    return 0;
}