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

    int n;
    cin >> n;

    string str;
    cin >> str;

    int sum { 0 };
    for(int i = 0; i < n; ++i)
    {
        sum += str[i] - '0';
    }

    cout << sum;
}