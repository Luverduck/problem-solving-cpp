#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 행의 수 N, 열의 수 M
    int N, M;
    cin >> N >> M;

    // 행렬을 나타내는 배열 생성
    int matrix[N][M] = { 0, };

    // 배열을 행렬 A로 초기화
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    // 행렬 A의 각 원소에 행렬 B의 각 원소를 합 연산
    int temp;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> temp;
            matrix[i][j] += temp;
        }
    }

    // 결과 출력
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
            cout << matrix[i][j] << " ";

        cout << "\n";
    }
}