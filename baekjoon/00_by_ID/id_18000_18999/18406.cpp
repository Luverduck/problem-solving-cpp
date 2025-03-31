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

    string N;
    cin >> N;

    int score_sum = 0;
    for (int i = 0; i < N.length() / 2; ++i)
    {
        score_sum += N[i] - '0';
        score_sum -= N[N.length() - i - 1] - '0';
    }

    cout << (score_sum == 0 ? "LUCKY" : "READY");
}