#include <iostream>

using namespace std;

void solution()
{
    char c;
    cin >> c;
    cout << (c == 'N' || c == 'n' ? "Naver D2" : "Naver Whale");
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