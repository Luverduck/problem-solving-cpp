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

    int x0, N;
    cin >> x0 >> N;

    int x = x0;
    while(N--)
        x = (x % 2 == 0) ? (x / 2) ^ 6 : (2 * x) ^ 6;

    cout << x;
}