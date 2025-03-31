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

    double A, B;
    cin >> A >> B;
    cout << setprecision(10) << A / B;
}