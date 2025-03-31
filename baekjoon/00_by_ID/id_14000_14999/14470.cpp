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

    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    cout << (A < 0 ? abs(A) * C + D + B * E : (B - A) * E);
}