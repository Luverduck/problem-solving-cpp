#include <iostream>

using namespace std;

void solution()
{
    long long N, M;
    cin >> N >> M;
    cout << (N == M);
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