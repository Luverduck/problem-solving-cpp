#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;

    cout << (n1 * k1 + n2 * k2);
}