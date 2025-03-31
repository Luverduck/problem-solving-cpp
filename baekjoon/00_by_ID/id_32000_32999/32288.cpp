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
    string nickname;
    cin >> n >> nickname;
    for (int i = 0; i < n; ++i)
        cout << (nickname[i] == 'I' ? 'i' : 'L');
}