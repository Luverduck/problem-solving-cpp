#include <iostream>

using namespace std;

void solution()
{
    string name;
    cin >> name;
    cout << ":fan::fan::fan:\n";
    cout << ":fan::" << name << "::fan:\n";
    cout << ":fan::fan::fan:\n";
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