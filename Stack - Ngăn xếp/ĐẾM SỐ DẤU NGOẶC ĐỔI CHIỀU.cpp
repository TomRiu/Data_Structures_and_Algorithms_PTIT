//#Created by Tôm Riu
#include <bits/stdc++.h>
#include<iostream>
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

void Sol(string s)
{
    stack<char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else 
        {
            if(st.size())
            {
                if(st.top() == '(')
                {
                    st.pop();
                }
                else st.push(s[i]);
            }
            else
            {
                cnt++;
                st.push('(');
            }
        }
    }
    cnt += st.size() / 2;
    cout << cnt << endl;
}

int main()
{
    fio();
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while(T--)
    {
        string s;
        cin >> s;
        Sol(s);
    }
    return 0;
}