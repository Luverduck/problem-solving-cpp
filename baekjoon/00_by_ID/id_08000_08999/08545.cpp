#include <iostream>
#include <algorithm>

using namespace std;

void solution()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}