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

    long long r, e, c;
    for(int n = 0; n < N; ++n)
    {
        cin >> r >> e >> c;
        if(r == e - c)
            cout << "does not matter";
        else if(r < e - c)
            cout << "advertise";
        else if(r > e - c)
            cout << "do not advertise";
        cout << '\n';
    }
}