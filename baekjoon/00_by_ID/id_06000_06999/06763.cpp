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

    int limit, speed;
    cin >> limit >> speed;
    int over = speed - limit;

    if (over <= 0)
        cout << "Congratulations, you are within the speed limit!";
    else
    {
        cout << "You are speeding and your fine is $";
        if (over >= 31)
            cout << "500.";
        else if (over >= 21)
            cout << "270.";
        else
            cout << "100.";
    }
}