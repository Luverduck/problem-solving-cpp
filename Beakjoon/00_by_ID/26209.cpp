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

    int bit;
    for (int i = 0; i < 8; ++i)
    {
        cin >> bit;
        if (bit <= 8) continue;
        cout << "F";
        return 0;
    }
    cout << "S";
}