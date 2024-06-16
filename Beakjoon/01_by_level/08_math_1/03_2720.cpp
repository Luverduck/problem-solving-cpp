#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 테스트 케이스의 개수
    int T;
    cin >> T;

    // 총 거스름돈
    int C;
    // 동전별 센트 환산표
    int coin[] { 25, 10, 5, 1 };

    while(cin >> C)
    {
        for(int i = 0; i < 4; ++i)
        {
            // C를 coin[i]로 나눈 몫이 해당 동전의 개수가 된다.
            cout <<  C / coin[i] << " ";
            // 다음 동전의 개수를 구하기 위한 나머지 대입 연산
            C %= coin[i];
        }
        cout << "\n";
    }
}