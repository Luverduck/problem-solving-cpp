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

    string input;
    cin >> input;

    int cnt = 0;
    for(int i = 0; i < input.length() - 3; ++i)
        if(input[i] == 'D' && input[i + 1] == 'K' && input[i + 2] == 'S' && input[i + 3] == 'H')
            cnt++;

    cout << cnt;
}