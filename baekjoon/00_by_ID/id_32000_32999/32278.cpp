#include <iostream>
#include <climits>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long N;
    cin >> N;

    if (N >= SHRT_MIN && N <= SHRT_MAX)
        cout << "short";
    else if (N >= INT_MIN && N <= INT_MAX)
        cout << "int";
    else
        cout << "long long";
}