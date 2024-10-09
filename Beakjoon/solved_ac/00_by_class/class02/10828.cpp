#include <iostream>
#include <stack>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    stack<int> s;

    int N;
    cin >> N;

    string command;
    while(N-- > 0)
    {
        cin >> command;

        if(command == "push")
        {
            int temp;
            cin >> temp;
            s.push(temp);
        }
        else
        {
            if(command == "pop")
            {
                if(s.empty())
                    cout << -1;
                else
                {
                    cout << s.top();
                    s.pop();
                }
            }
            else if(command == "size")
                cout << s.size();
            else if(command == "empty")
                cout << s.empty();
            else if(command == "top")
                cout << (!s.empty() ? s.top() : -1);
            cout << '\n';
        }
    }
}