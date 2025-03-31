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

    int S, M, L;
    cin >> S >> M >> L;

    int happiness = S + 2 * M + 3 * L;

    cout << (happiness >= 10 ? "happy" : "sad");
}