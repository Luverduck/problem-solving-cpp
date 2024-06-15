#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num, count = 0;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> num;
        if(num == 1)
            continue;

        // TO DO : num을 2부터 num-1까지 나누면서 한 번이라도 나누어지면 소수가 아님
        bool isPrime = true;
        for(int j = 2; j < num; ++j)
        {
            if(num % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if(isPrime == true)
            count++;
    }

    cout << count;
}