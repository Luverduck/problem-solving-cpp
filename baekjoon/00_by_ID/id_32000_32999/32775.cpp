#include <iostream>

using namespace std;

void solution()
{
    int S, F;
    cin >> S >> F;
    cout << (S <= F ? "high speed rail" : "flight");
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