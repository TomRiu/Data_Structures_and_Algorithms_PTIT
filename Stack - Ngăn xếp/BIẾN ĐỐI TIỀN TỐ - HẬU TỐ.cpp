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

void prefix_to_postfix(string s)
{
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(isalpha(s[i]))
        {
            string tmp;
            tmp = s[i];
            st.push(tmp);
        }
        else
        {
            string tmp1 = st.top();
            st.pop();
            string tmp2 = st.top();
            st.pop();
            string save = tmp1 + tmp2 + s[i];
            st.push(save);
        }
    }
    cout << st.top() << endl;
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
        prefix_to_postfix(s);
    }
    return 0;
}