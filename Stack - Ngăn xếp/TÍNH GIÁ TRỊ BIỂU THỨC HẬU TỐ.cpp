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

void CalculatePostfix(string s)
{
    stack<int> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            st.push(s[i] - '0');
        }
        else
        {
            int tmp1 = st.top();
            st.pop();
            int tmp2 = st.top();
            st.pop();
            int tmp;
            if(s[i] == '+') tmp = tmp2 + tmp1;
            else if(s[i] == '-') tmp = tmp2 - tmp1;
            else if(s[i] == '*') tmp = tmp2 * tmp1;
            else if(s[i] == '/') tmp = tmp2 / tmp1;
            st.push(tmp);
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
        CalculatePostfix(s);
    }
    return 0;
}