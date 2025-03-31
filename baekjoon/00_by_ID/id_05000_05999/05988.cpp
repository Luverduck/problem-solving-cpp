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
    for(int n = 0; n < N; ++n)
    {
        string K;
        cin >> K;
        cout << (K[K.length() - 1] % 2 == 0 ? "even" : "odd") << '\n';
    }
}