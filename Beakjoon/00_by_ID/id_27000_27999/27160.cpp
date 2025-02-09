#include <iostream>
#include <map>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    map<string, int> m;
    for (int n = 0; n < N; ++n)
    {
        string name;
        int cnt;
        cin >> name >> cnt;
        m[name] += cnt;
    }
    for (auto& p : m)
    {
        if (p.second != 5) continue;
        cout << "YES";
        return;
    }
    cout << "NO";
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