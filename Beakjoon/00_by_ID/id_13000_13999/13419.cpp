#include <iostream>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        string s;
        cin >> s;
        int period = s.length();
        if (period == 1)
        {
            cout << s[0] << '\n' << s[0] << '\n';
            continue;
        }
        if (period % 2 == 0) period /= 2;
        int sLength = s.length();
        for (int i = 0; i < period; i++)
            cout << s[(2 * i) % sLength];
        cout << '\n';
        for (int i = 0; i < period; i++)
            cout << s[(2 * i + 1) % sLength];
        cout << '\n';
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