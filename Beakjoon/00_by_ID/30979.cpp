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

    int T, N, F;
    cin >> T >> N;;

    int duration = 0;
    for(int n = 0; n < N; ++n)
    {
        cin >> F;
        duration += F;
    }

    cout << (duration >= T ? "Padaeng_i Happy" : "Padaeng_i Cry");
}