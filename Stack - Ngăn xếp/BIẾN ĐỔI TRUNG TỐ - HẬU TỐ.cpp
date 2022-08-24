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

void infix_to_postfix()
{
    unordered_map<char, int> o;
    o['+'] = o['-'] = 1;
    o['*'] = o['/'] = 2;
    o['^'] = 3;
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])) 
        {
            cout << s[i];
        }
        else
        {
            if(s[i] == '(') 
            {
                st.push(s[i]);
            }
            else if(s[i] != ')')
            {
                while(st.size() and o[st.top()] >= o[s[i]])
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else
            {
                while(st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }
    while(st.size())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

void output()
{
    infix_to_postfix();
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