#include <iostream>

using namespace std;

long long factorial(long long n)
{
    if(n > 1)
        return factorial(n - 1) * n;
    else
        return 1;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    long long ret = factorial(n);

    cout << ret;
}