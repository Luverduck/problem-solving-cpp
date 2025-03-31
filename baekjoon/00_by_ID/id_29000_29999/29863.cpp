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

    int from, to;
    cin >> from >> to;

    if(from < to)
        cout << (to - from);
    else
        cout << (to + (24 - from));
}