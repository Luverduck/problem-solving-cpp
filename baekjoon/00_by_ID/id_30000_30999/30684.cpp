#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    vector<string> v;
    for (int n = 0; n < N; ++n)
    {
        string temp;
        cin >> temp;
        if (temp.length() != 3) continue;
        v.emplace_back(temp);
    }
    sort(v.begin(), v.end());
    cout << v[0];
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