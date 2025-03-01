#include <iostream>

using namespace std;

void solution()
{
    int n, k;
    cin >> n >> k;
    int scoreMax = 3 * (n - k);
    int scoreMin = -3 * (n - k);
    while (k--)
    {
        int temp;
        cin >> temp;
        scoreMax += temp;
        scoreMin += temp;
    }
    cout << 1.0 * scoreMin / n << " " << 1.0 * scoreMax / n;
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