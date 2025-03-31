#include <iostream>

using namespace std;

int sum(int A, int B)
{
    return A + B;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B;
    cin >> A >> B;
    cout << sum(A, B);
}