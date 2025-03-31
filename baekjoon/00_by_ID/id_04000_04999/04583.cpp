#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    while (cin >> str)
    {
        if (str == "#") break;
        for (char& c : str)
        {
            if (c == 'b') c = 'd';
            else if (c == 'd') c = 'b';
            else if (c == 'p') c = 'q';
            else if (c == 'q') c = 'p';
            else if (c != 'i' && c != 'o' && c != 'v' && c != 'w' && c != 'x')
            {
                str = "DILAVNI";
                break;
            }
        }
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}