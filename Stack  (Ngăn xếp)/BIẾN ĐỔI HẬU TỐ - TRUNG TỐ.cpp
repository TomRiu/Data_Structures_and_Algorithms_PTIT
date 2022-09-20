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

void postfix_to_infix()
{
    stack<string> st;
    for(int i = 0; i < s.size(); i++)
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
            string tmp = "(" + tmp2 + s[i] + tmp1 + ")";
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

void output()
{
    postfix_to_infix();
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