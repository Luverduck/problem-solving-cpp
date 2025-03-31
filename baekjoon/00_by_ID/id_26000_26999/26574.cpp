#include <iostream>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        cout << temp << " " << temp << '\n';
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