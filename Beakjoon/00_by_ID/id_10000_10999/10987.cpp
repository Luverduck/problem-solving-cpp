#include <iostream>

using namespace std;

void solution()
{
    string input;
    cin >> input;
    int res = 0;
    for (char& c : input) {
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                res++;
            break;
        }
    }
    cout << res;
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