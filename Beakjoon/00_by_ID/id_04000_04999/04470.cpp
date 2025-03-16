#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    cin.ignore();
    for (int n = 1; n <= N; ++n)
    {
        string s;
        getline(cin, s);
        cout << n << ". " << s << '\n';
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