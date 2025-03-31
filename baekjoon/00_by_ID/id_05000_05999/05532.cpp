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

    int L;
    double A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    cout << L - max(ceil(A / C), ceil(B / D));
}