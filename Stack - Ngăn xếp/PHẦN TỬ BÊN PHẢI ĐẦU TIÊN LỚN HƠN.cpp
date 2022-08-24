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

void Sol(int n, int a[])
{
    stack<int> st, res;
    st.push(a[n - 1]);
    res.push(-1);
    for(int i = n - 2; i >= 0; i--)
    {
        while(st.size() and st.top() <= a[i])
        {
            st.pop();
        }
        if(st.size()) res.push(st.top());
        else res.push(-1);
        st.push(a[i]);
    }
    while(res.size())
    {
        cout << res.top() << " ";
        res.pop();
    }
}

int main()
{
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while (T--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++) cin >> a[i];
        Sol(n, a);
        cout << endl;
    }
    return 0;
}