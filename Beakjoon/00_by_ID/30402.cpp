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

    char pixel;
    for (int i = 0; i < 225; ++i)
    {
        cin >> pixel;
        if (pixel == 'w')
        {
            cout << "chunbae";
            return 0;
        }
        if (pixel == 'b')
        {
            cout << "nabi";
            return 0;
        }
        if (pixel == 'g')
        {
            cout << "yeongcheol";
            return 0;
        }
    }
}