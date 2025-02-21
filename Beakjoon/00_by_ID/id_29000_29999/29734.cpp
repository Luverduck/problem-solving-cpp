#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    long long N, M, T, S;
    cin >> N >> M >> T >> S;
    long long X = N + (N - 1) / 8 * S;
    long long Y = M + (M - 1) / 8 * (S + 2 * T) + T;
    cout << (X < Y ? "Zip" : "Dok") << "\n" << min(X, Y);
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