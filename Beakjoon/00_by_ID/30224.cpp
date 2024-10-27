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

    long long input;
    cin >> input;

    bool flag2 = input % 7 == 0;
    bool flag1 = false;
    while(input > 0)
    {
        if(input % 10 == 7)
        {
            flag1 = true;
            break;
        }
        input /= 10;
    }

    if(!flag1 && !flag2)
        cout << 0;
    else if(!flag1)
        cout << 1;
    else if(!flag2)
        cout << 2;
    else
        cout << 3;
}