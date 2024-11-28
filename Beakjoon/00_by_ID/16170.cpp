#include <iostream>
#include <ctime>
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

    time_t t = time(nullptr);
    tm* now = localtime(&t);

    cout << now->tm_year + 1900 << '\n';
    cout << setfill('0') << setw(2) << now->tm_mon + 1 << '\n';
    cout << setfill('0') << setw(2) << now->tm_mday;

}