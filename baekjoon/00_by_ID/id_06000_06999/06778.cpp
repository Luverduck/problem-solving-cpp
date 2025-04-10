#include <iostream>

using namespace std;

void solution()
{
    int antenna, eyes;
    cin >> antenna >> eyes;
    if (antenna >= 3 && eyes <= 4)
        cout << "TroyMartian\n";
    if (antenna <= 6 && eyes >= 2)
        cout << "VladSaturnian\n";
    if (antenna <= 2 && eyes <= 3)
        cout << "GraemeMercurian\n";
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