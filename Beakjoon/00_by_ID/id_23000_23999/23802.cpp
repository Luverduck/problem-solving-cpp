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

    int dimension = 5 * N;
    for (int i = 1; i <= dimension; ++i)
    {
        for (int j = 1; j <= dimension; ++j)
        {
            if (i > N && j > N) continue;
            cout << "@";
        }
        cout << "\n";
    }
}