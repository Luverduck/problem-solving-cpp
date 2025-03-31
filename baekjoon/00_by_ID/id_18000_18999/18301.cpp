#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;

    double x = 1.0 * (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;
    cout << floor(x);
}