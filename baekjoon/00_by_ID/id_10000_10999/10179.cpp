#include <iostream>
#include <iomanip>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    for (int n = 0; n < N; ++n)
    {
        double d;
        cin >> d;
        cout << fixed << setprecision(2) << "$" << d * 0.8 << '\n';
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