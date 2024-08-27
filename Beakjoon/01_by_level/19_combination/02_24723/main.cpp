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

    // 녹색 거탑의 높이 N
    int N;
    cin >> N;

    // 녹색 거탑의 높이 N만큼 비트 왼쪽 시프트 연산
    int result = 1;
    result <<= N;

    cout << result;
}