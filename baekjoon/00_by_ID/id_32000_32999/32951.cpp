#include <iostream>

using namespace std;

void solution()
{
    int year;
    cin >> year;
    cout << year - 2024;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}