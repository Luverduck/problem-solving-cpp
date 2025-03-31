#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    int position[101] { 0, };
    int res = 0;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        position[n] == 0 ? position[n]++ : res++;
    }
    cout << res;
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