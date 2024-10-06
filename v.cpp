#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isStr(string s)
{
    stack<char> st;
    for (char ch : s)
    {

        if (ch == '1' && !st.empty() && st.top() == '0')
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (isStr(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
