#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;

    int res = 0;
    while (N > 0)
    {
        if (N % 5 == 0)
        {
            res += N / 5;
            N %= 5;
        }
        else
        {
            res++;
            N -= 2;
        }
    }
    cout << (N == 0 ? res : -1);
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