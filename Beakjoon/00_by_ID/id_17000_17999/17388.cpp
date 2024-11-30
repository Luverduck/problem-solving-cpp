#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int S, K, H;
    cin >> S >> K >> H;

    if (S + K + H >= 100)
    {
        cout << "OK";
        return 0;
    }

    int p_min = min({S,K,H});
    if (p_min == S)
        cout << "Soongsil";
    else if (p_min == K)
        cout << "Korea";
    else
        cout << "Hanyang";
}