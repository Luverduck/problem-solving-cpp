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

    double A, B;
    cin >> A >> B;
    double M = (B - A) / 400;

    cout << fixed << setprecision(4) << 1 / (1 + pow(10, M));
}