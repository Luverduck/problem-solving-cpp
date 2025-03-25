#include <iostream>
#include <set>

using namespace std;

void solution()
{
    set<char> set = {'a', 'i', 'e', 'o', 'u'};
    string s;
    while (getline(cin, s))
    {
        if (s == "#") break;
        int res = 0;
        for (char& c : s)
        {
            c = tolower(c);
            res += set.count(c);
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