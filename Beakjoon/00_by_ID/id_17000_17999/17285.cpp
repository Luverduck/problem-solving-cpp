#include <iostream>

using namespace std;

void solution()
{
    string T;
    cin >> T;
    int key = 'C' ^ T[0];
    for (char& c : T)
        cout << static_cast<char>(c ^ key);
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