#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int first, second;

    while(true)
    {
        cin >> first >> second;

        if(first == 0 && second == 0)
            return 0;

        if(second % first == 0)
            cout << "factor\n";
        else if(first % second == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }
}