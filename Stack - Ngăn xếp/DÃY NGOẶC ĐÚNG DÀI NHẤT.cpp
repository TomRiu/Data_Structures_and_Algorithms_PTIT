//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#pragma GCC optimize("Ofast")
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() if(fopen("input.txt", "r")){freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);}
const ll MOD = 1e9 + 7;
using namespace std;

void check(string s, stack<char> st) //stack st dùng để lưu '('
{
	//stack dùng để đánh dấu số thứ tự của '('
    stack<int> tmp;
    int cnt = 0, Max = 0;
    //Mảng để lưu đánh số thứ tự cặp dấu ngoặc
    int a[s.size() + 5] = {};
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
            tmp.push(++cnt); 
            a[i] = tmp.top(); // lưu số thứ tự của '('
        }
        else // s[i] == ')'
        {
        	/* nếu st không rỗng thì ')' sẽ 
        	tạo thành 1 cặp với '(' trong st */
            if(st.size())
            {
                st.pop();
                a[i] = tmp.top(); // lưu số thứ tự của ')'
                tmp.pop();
            }
            else 
            {
                a[i] = -1;
            }
        }
    }
    //đếm số lần xuất hiện của số thứ tự ngoặc
    map<int, int> m;
    for(int i = 0; i < s.size(); i++)
    {
        if(a[i] == 0) continue;
        m[a[i]]++;
    }
    int dem = 0;
    for(int i = 0; i < s.size(); i++)
    {
    	/* Nếu số lần xuất hiện số thứ tự ngoặc = 1 
    	có nghĩa là nó không có cặp, nên ta sẽ reset biến đếm */
        if(m[a[i]] == 1 || a[i] == -1)
        {
            Max = max(Max, dem); 
            dem = 0;
        }
        else if(m[a[i]] == 2)
        {
            dem++;
            m[a[i]] = 0;
        }
    }
    Max = max(Max, dem);
    //Xâu rỗng là 1 dãy ngoặc đúng
    if(s.empty()) cout << 1;
    
    else cout << Max * 2;
}

int main()
{
    faster();
    int T = 1;
    cin >> T; cin.ignore();
    while(T--)
    {
        stack<char> st;
        string s;
        getline(cin, s);
        check(s, st);
        cout << endl;
    }
    return 0;
}