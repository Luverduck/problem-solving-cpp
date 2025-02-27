#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    int N, P;
    cin >> N >> P;

    int discount = 0;
    if (N >= 20)
        discount = max(discount, P * 25 / 100);
    if (N >= 15)
        discount = max(discount, 2000);
    if (N >= 10)
        discount = max(discount, P * 10 / 100);
    if (N >= 5)
        discount = max(discount, 500);

    cout << max(P - discount, 0);
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