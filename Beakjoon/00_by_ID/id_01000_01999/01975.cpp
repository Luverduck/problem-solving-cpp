#include <iostream>

using namespace std;

void solution()
{
    int arr[1001] { 0, };
    for (int i = 2; i <= 1000; ++i)
    {
        for (int j = i; j <= 1000; j *= i)
        {
            for (int k = j; k <= 1000; k += j)
            {
                arr[k]++;
            }
        }
    }

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        cout << arr[N] << '\n';
    }
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