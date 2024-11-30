#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double R;
    cin >> R;

    cout << fixed << setprecision(6) << (M_PI * R * R) << '\n' << (2 * R * R);
}