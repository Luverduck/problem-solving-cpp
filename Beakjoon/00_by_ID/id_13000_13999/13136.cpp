#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double R, C, N;
    cin >> R >> C >> N;

    long long row = ceil(R / N);
    long long col = ceil(C / N);
    cout << (row * col);
}