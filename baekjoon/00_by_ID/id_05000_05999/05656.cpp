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

    int n = 0;
    int a, b;
    string op;
    while (cin >> a >> op >> b)
    {
        if (op == "E") break;
        n++;
        bool res;
        if (op == ">") res = a > b;
        else if (op == ">=") res = a >= b;
        else if (op == "<") res = a < b;
        else if (op == "<=") res = a <= b;
        else if (op == "==") res = a == b;
        else if (op == "!=") res = a != b;
        cout << "Case " << n << ": " << boolalpha << res << '\n';
    }
}
