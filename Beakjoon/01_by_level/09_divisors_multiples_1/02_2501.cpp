#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, idx = 0, devisor = 0;
    cin >> n >> k;

    while(idx != k)
    {
        if(devisor > n)
        {
            cout << 0;
            return 0;
        }

        devisor++;

        if(n % devisor == 0)
            idx++;
    }
}