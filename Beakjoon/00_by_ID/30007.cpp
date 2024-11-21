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

    int A, B, X;
    for(int n = 0; n < N; ++n)
    {
        cin >> A >> B >> X;
        cout << A * (X - 1) + B << '\n';
    }
}