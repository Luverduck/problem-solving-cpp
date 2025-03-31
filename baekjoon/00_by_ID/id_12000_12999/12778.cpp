#include <iostream>
#include <sstream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, M;
    char C;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        cin >> M >> C;
        string token;
        while (M--)
        {
            cin >> token;
            if (C == 'C')
                cout << token[0] - 'A' + 1 << " ";
            else
                cout << static_cast<char>('A' + stoi(token) - 1) << " ";
        }
        cout << '\n';
    }
}