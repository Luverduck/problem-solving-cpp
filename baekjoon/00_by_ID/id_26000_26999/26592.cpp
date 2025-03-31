#include <iostream>
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

    int n;
    cin >> n;

    cout.precision(2);

    double area, base;
    for(int i = 0; i < n; ++i)
    {
        cin >> area >> base;
        cout << fixed << "The height of the triangle is " << (2 * area / base) << " units\n";
    }
}