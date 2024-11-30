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

    int p, q;
    cin >> p >> q;

    if(p <= 50 && q <= 10)
        cout << "White";
    else if(q > 30)
        cout << "Red";
    else
        cout << "Yellow";
}