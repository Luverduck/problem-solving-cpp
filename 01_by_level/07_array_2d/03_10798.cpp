#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 가로 5줄, 세로 15줄인 2차원 배열 생성
    char alphabet[5][15] = { 0, };

    // 문자열을 입력받아 2차원 배열의 행에 저장
    for(int i = 0; i < 5; ++i)
        cin >> alphabet[i]; // 띄어쓰기가 없으므로 cin으로 입력을 받는다.

    // 2차원 배열을 열 -> 행 방향으로 순회
    for(int j = 0; j < 15; ++j)
    {
        for(int i = 0; i < 5; ++i)
        {
            // 문자가 저장되지 않은 경우 건너뛰기
            if(alphabet[i][j] == 0)
                continue;
            // i행 j열의 문자 출력
            cout << alphabet[i][j];
        }
    }
}