#include <iostream>

using namespace std;

void solution()
{
    int N;
    string S;
    cin >> N >> S;
    int res = 0;
    for(int n = 0; n < N; ++n) {
        if(S[n] == 'a' || S[n] == 'i' || S[n] == 'u' || S[n] == 'e' || S[n] == 'o')
            res++;
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