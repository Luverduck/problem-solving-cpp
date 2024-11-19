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

    double X, Y;
    cin >> X >> Y;
    double price_min = X / Y;

    int N;
    cin >> N;
    for(int n = 0; n < N; ++n)
    {
        cin >> X >> Y;
        price_min = min(price_min, X / Y);
    }

    cout << fixed << setprecision(2) << (price_min * 1000);
}