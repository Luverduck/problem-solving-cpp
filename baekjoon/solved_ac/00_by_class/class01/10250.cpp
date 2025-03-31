#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스의 수 T
    int T;
    // 층 수 H, 층당 방의 수 W, 손님의 순번
    int H, W, N;

    cin >> T;
    for(int t = 0; t < T; ++t)
    {
        cin >> H >> W >> N;
        // 순번 N에서 1을 뺀 값으로 방의 번호 결정
        int XX = (N - 1) / H + 1;
        int YY = (N - 1) % H + 1;
        cout << (YY * 100 + XX) << '\n';
    }
}