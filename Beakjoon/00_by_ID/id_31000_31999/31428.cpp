#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    int cnt['Z' - 'A'] { 0, };
    for (int n = 0; n < N; ++n)
    {
        char c;
        cin >> c;
        cnt[c - 'A']++;
    }

    char target;
    cin >> target;
    cout << cnt[target - 'A'];
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