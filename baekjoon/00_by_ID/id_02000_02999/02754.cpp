#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string grade;
    cin >> grade;

    double res = 0;
    if (grade[0] == 'F')
    {
        cout << "0.0";
        return 0;
    }

    if (grade[0] == 'A')
        res += 4.0;
    else if (grade[0] == 'B')
        res += 3.0;
    else if (grade[0] == 'C')
        res += 2.0;
    else if (grade[0] == 'D')
        res += 1.0;

    if (grade[1] == '+')
        res += 0.3;
    else if (grade[1] == '-')
        res -= 0.3;

    cout << fixed << setprecision(1) << res;
}