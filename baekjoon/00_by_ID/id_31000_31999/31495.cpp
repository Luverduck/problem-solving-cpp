#include <iostream>

using namespace std;

void solution()
{
    string S;
    getline(cin, S);
    if (S.length() > 2 && S[0] == '\"' && S[S.length() - 1] == '\"')
        cout << S.substr(1, S.length() - 2);
    else
        cout << "CE";
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