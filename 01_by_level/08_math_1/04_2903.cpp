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

    int N;
    cin >> N;

    int cnt_base = 2;
    for(int i = 0; i < N; ++i)
        cnt_base += pow(2, i);

    cout << cnt_base * cnt_base << endl;
}