#include <iostream>
#include <string>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    for (int n = 0; n < N; ++n)
    {
        string s;
        int i, j;
        cin >> s >> i >> j;
        s.erase(i, j - 1);
        cout << s << '\n';
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