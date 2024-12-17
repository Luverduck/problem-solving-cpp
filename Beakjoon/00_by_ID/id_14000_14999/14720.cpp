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

    int N;
    cin >> N;

    int res = 0;
    for (int n = 0; n < N; ++n)
    {
        int temp;
        cin >> temp;
        if (res % 3 == temp) res++;
    }
    cout << res;
}