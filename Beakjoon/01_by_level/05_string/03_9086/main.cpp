#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string str;

    for(int i = 0; i < n; ++i)
    {
        cin >> str;
        cout << str[0] << str[str.length() - 1] << "\n";
    }
}