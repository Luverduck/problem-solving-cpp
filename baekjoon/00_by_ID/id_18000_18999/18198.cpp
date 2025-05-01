#include <iostream>

using namespace std;

void solution()
{
    string input;
    cin >> input;
    int total = 0;
    for (int i = 0; i < input.length(); i += 2)
    {
        char name = input[i];
        int score = input[i + 1] - '0';
        total += (name == 'A' ? score : -score);
    }
    cout << (total >= 0 ? 'A' : 'B');
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