#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void solution()
{
    vector<double> p(10);
    for (int i = 0; i < 10; ++i)
        cin >> p[i];
    sort(p.begin(), p.end(), greater<>());

    double res = 1;
    for (int i = 1; i < 10; ++i)
    {
        res *= p[i - 1];
        res /= i;
    }
    cout << fixed << setprecision(6) << res * pow(10, 9);
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