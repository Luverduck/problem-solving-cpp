#include <iostream>

using namespace std;

void solution()
{
    string name;
    int age, weight;
    while (cin >> name >> age>> weight)
    {
        if (name == "#") break;
        if (age > 17 || weight >= 80)
        {
            cout << name << " Senior\n";
            continue;
        }
        cout << name << " Junior\n";
    }
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