#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int cur, prev = 1001;

    int height = 0;
    int start = 0;
    for (int n = 0; n < N; ++n)
    {
        cin >> cur;
        if (cur - prev > 0)
            height = max(height, cur - start);
        else
            start = cur;
        prev = cur;
    }

    cout << height;
}