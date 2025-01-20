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

    int max_score[] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };

    int sum_score = 0;
    for (int i = 0; i < 9; ++i)
    {
        int score;
        cin >> score;
        if (score > max_score[i])
        {
            cout << "hacker";
            return 0;
        }
        sum_score += score;
    }
    cout << (sum_score < 100 ? "none" : "draw");
}