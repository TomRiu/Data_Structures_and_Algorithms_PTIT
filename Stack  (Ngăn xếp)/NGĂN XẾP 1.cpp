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
    vector<int> st;
    while(cin >> s)
    {
        if(s == "push")
        {
            int x; 
            cin >> x;
            st.push_back(x);
        }
        else if(s == "pop")
        {
            if(st.size()) st.pop_back();
        }
        else if(s == "show")
        {
            if(st.size())
            {
                for(int i : st) cout << i << " ";
                cout << endl;
            }
            else
            {
                cout << "empty";
                cout << endl;
            }
        }
    }
    return 0;
}