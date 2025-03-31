#include <iostream>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int res = 0;
        for (char& c : s)
        {
            if (c == 'D') break;
            res++;
        }
        cout << res << '\n';
    }
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}