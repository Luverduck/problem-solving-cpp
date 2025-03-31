#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    cin.ignore();
    for (int n = 1; n <= N; ++n)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        int cnt['z' - 'a' + 1] { 0, };
        for (char& c : s1)
            cnt[c - 'a']++;
        for (char& c : s2)
            cnt[c - 'a']--;
        int res = 0;
        for (auto& i : cnt)
            res += abs(i);
        cout << "Case #" << n << ": " << res << '\n';
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