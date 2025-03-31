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

    int first, second;
    while(true)
    {
        cin >> first >> second;
        if (first == 0 && second == 0) break;
        cout << (first > second ? "Yes" : "No") << '\n';
    }
}