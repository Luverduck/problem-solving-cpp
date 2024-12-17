#include <iostream>
#include <vector>
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

    int T;
    cin >> T;
    cin.ignore();

    for (int t = 0; t < T; ++t)
    {
        string temp;
        getline(cin, temp);
        istringstream iss(temp);
        int res = 0;
        string token;
        while (getline(iss, token, ' '))
            res += stoi(token);
        cout << res << '\n';
    }
}