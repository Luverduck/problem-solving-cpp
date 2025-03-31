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

    int T, A, B;
    cin >> T;
    for(int t = 1; t <= T; ++t)
    {
        cin >> A >> B;
        cout << "Case " << t << ": " << (A + B) << '\n';
    }
}