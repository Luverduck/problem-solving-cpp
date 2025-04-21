#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    long long R, K, M;
    cin >> R >> K >> M;
    cout << static_cast<long long>(R / pow(2, M / K));
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