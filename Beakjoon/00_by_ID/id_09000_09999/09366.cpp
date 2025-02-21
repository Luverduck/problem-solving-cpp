#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        cout << "Case #" << t << ": ";
        int A, B, C;
        cin >> A >> B >> C;
        if (A + B + C <= 2 * max(A, max(B, C)))
        {
            cout << "invalid!\n";
            continue;
        }
        if (A == B && A == C)
            cout << "equilateral";
        else if (A != B && A != C && B != C)
            cout << "scalene";
        else
            cout << "isosceles";
        cout << "\n";
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