#include <iostream>

using namespace std;

void solution()
{
    int N;
    string K;
    cin >> N >> K;

    int isEven = 0;
    for (int i = 0; i < K.length(); ++i)
        isEven += (K[i] - '0') % 2 == 0 ? 1 : -1;
    cout << (isEven == 0 ? -1 : (isEven > 0 ? 0 : 1));
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