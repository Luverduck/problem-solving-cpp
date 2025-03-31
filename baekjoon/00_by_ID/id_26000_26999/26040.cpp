#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    char alphabet;
    while (cin >> alphabet)
    {
        for (char& c : str)
            if (alphabet == c)
                c = c + 'a' - 'A';
    }
    cout << str;
}