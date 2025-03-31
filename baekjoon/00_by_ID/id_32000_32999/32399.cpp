#include <iostream>

using namespace std;

void solution()
{
    string S;
    cin >> S;

    if (S == "(1)")
        cout << 0;
    else if (S == ")1(")
        cout << 2;
    else
        cout << 1;
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