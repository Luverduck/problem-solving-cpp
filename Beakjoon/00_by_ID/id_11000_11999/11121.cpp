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

    int T;
    cin >> T;

    string input, output;
    for (int t = 0; t < T; ++t)
    {
        cin >> input >> output;
        if (input.length() != output.length())
        {
            cout << "ERROR" << '\n';
            continue;
        }
        bool flag = true;
        for (int i = 0; i < input.length(); ++i)
        {
            if (input[i] == output[i]) continue;
            flag = false;
            break;
        }
        cout << (flag ? "OK" : "ERROR") << '\n';
    }

}