#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        string s;
        cin >> s;
        cout << (s.length() >= 6 && s.length() <= 9 ? "yes" : "no") << '\n';
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