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

int check(string s)
{
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if(isalpha(s[i])) continue;
        else
        {
            if(s[i] != ')')
            {
                st.push(s[i]);
            }
            else
            {
                int ok = 0;
                while(st.size() and st.top() != '(')
                {
                    ok = 1;
                    st.pop();
                }
                st.pop();
                if(ok == 0) return 1;
            }
        }
    }
    return 0;
}

int main()
{
    fio();
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while(T--)
    {
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        s.clear();
        while(ss >> tmp)
        {
            s += tmp;
        }
        if(check(s)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}