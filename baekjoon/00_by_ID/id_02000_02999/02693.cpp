#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        vector<int> v(10);
        for (int i = 0; i < 10; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());
        cout << v[7] << '\n';
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