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

    string name;
    cin >> name;

    if(name == "NLCS")
        cout << "North London Collegiate School";
    else if(name == "BHA")
        cout << "Branksome Hall Asia";
    else if(name == "KIS")
        cout << "Korea International School";
    else
        cout << "St. Johnsbury Academy";
}