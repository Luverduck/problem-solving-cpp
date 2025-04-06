#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    cin.ignore();

    string S;
    getline(cin, S);

    int res = 0;
    int cnt['z' - 'a'] { 0, };
    for (int n = 0; n < N; ++n)
    {
        if (S[n] < 'a' || S[n] > 'z') continue;
        int idx = S[n] - 'a';
        cnt[idx]++;
        res = max(res, cnt[idx]);
    }
    cout << res;
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