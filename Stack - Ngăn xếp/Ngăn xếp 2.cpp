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


int main()
{
    faster();
    string s = "";
    stack<int> st;
    int T = 1;
    cin >> T; cin.ignore();
    while(T--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            int x; 
            cin >> x;
            st.push(x);
        }
        else if(s == "POP")
        {
            if(st.size()) st.pop();
        }
        else if(s == "PRINT")
        {
            if(st.size())
            {
                cout << st.top();
                cout << endl;
            }
            else
            {
                cout << "NONE";
                cout << endl;
            }
        }
    }
    return 0;
}