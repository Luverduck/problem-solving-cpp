#include <iostream>

using namespace std;

void solution()
{
    string s;
    while (getline(cin, s))
    {
        int res[4] { 0, };
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == ' ')
                res[3]++;
            else if (s[i] <= '9')
                res[2]++;
            else if (s[i] <= 'Z')
                res[1]++;
            else if (s[i] <= 'z')
                res[0]++;
            else if (s[i] == ' ')
                res[3]++;
        }
        cout << res[0] << " " << res[1] << " " << res[2] << " " << res[3] << '\n';
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