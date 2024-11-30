#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<double> score(N);
    for(int i = 0; i < N; ++i)
        cin >> score[i];

    sort(score.begin(), score.end());

    cout << fixed;
    cout.precision(3);
    for(int i = 0; i < 7; ++i)
        cout << score[i] << '\n';
}