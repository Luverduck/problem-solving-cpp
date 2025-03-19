#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    int xMin = 11, yMin = 11, xMax = -11, yMax = -11;
    for (int n = 0; n < N; ++n)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        xMin = min(xMin, a);
        yMin = min(yMin, b);
        xMax = max(xMax, c);
        yMax = max(yMax, d);
        cout << 2 * (abs(xMin - xMax) + abs(yMin - yMax)) << '\n';
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