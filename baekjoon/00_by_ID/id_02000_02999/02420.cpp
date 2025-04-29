#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    long long N, M;
    cin >> N >> M;
    cout << abs(N - M);
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