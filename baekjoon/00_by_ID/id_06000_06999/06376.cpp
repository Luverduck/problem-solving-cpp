#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << "n e\n";
    cout << "- -----------\n";
    cout << "0 1\n";
    cout << "1 2\n";
    cout << "2 2.5\n";

    double res = 2.5;
    for (int i = 3; i <= 9; ++i)
    {
        res += 1.0 / factorial(i);
        cout << i << ' ' << fixed << setprecision(9) << res << '\n';
    }
}