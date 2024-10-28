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

    int win = 0;

    char c;
    while(cin >> c)
        if(c == 'W') win++;

    if(win >= 5)
        cout << 1;
    else if(win >= 3)
        cout << 2;
    else if(win >= 1)
        cout << 3;
    else
        cout << -1;
}