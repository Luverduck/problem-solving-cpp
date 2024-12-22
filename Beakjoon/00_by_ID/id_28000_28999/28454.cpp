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

    string now;
    int N;
    cin >> now >> N;

    int res = 0;
    string duration;
    while (N--)
    {
        cin >> duration;
        if (now > duration) continue;
        res++;
    }
    cout << res;
}