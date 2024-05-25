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

    int n;
    int a, b;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a + b << "\n";
    }
};