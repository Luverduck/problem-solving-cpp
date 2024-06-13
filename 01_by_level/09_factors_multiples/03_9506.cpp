#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum;

    while(true)
    {
        cin >> n;
        if(n == -1) return 0;

        sum = 0;
        for(int i = 1; i < n; ++i)
        {
            if(n % i == 0)
                sum += i;
        }

        if(n == sum)
        {
            cout << n << " = 1";
            for(int i = 2; i < n; ++i)
            {
                if(n % i == 0)
                    cout << " + " << i;
            }
            cout << "\n";
        }
        else
            cout << n << " is NOT perfect.\n";
    }
}