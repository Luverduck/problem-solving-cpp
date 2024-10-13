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

    int N;
    cin >> N;

    string d, f, p;
    for(int n = 0; n < N; ++n)
    {
        cin >> d >> f >> p;
        cout << fixed << setprecision(2) << '$' << (stod(d) * stod(f) * stod(p)) << '\n';
    }
}