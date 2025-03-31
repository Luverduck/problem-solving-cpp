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

    int sum_score = 0;
    for(int i = 0; i < 5; ++i)
    {
        int score;
        cin >> score;
        sum_score += score > 40 ? score : 40;
    }

    cout << sum_score / 5;
}