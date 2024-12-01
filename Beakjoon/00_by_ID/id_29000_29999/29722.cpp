#include <iostream>
#include <string>
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

    string now;
    int period;
    cin >> now >> period;

    int year = stoi(now.substr(0, 4));
    int month = stoi(now.substr(5, 7));
    int day = stoi(now.substr(8, 10));

    int days = (year - 1) * 12 * 30 + (month - 1) * 30 + (day - 1) + period;

    year = days / 12 / 30 + 1;
    month = days / 30 % 12 + 1;
    day = days % 30 + 1;

    cout << setfill('0') << year << '-' << setw(2) << month << '-' << setw(2) << day;
}