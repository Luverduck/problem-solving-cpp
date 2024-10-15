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

    int wc, hc, ws, hs;
    cin >> wc >> hc >> ws >> hs;

    cout << (wc - ws >= 2 && hc - hs >= 2 ? 1 : 0);
}