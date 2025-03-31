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

    int N;
    cin >> N;

    int cycle = 0;
    int temp = N;
    while (true)
    {
        temp = (temp % 10 * 10) + (temp / 10 + temp % 10) % 10;
        cycle++;
        if (temp == N) break;
    }
    cout << cycle;
}