#include <iostream>

using namespace std;

void solution()
{
    int a1, a2, a3;
    while(cin >> a1 >> a2 >> a3)
    {
        if (!a1 && !a2 && !a3) break;
        int ap = a2 - a1;
        int gp = a2 / a1;
        if (a2 + ap == a3) cout << "AP " << a3 + ap;
        else if (a2 * gp == a3) cout << "GP " << a3 * gp;
        cout << '\n';
    }
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