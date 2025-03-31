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

    long long A, B;
    cin >> A >> B;

    long long N = max(A - B, B - A) + 1;
    long long sum = N * (A + B) / 2;

    cout << sum;
}