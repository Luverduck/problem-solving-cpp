#include <iostream>

using namespace std;

void solution()
{
    int N;
    string S;
    cin >> N >> S;
    if (S[S.length() - 1] == 'G')
        cout << S.substr(0, S.length() - 1);
    else
        cout << S << 'G';
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