#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int hamburger = 2001, drink = 2001;
    for (int i = 0; i < 5; ++i)
    {
        int price;
        cin >> price;
        if (i < 3)
            hamburger = min(hamburger, price);
        else
            drink = min(drink, price);
    }
    cout << (hamburger + drink - 50);
}