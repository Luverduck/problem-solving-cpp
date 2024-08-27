#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력받은 N의 값 저장
    int N;
    cin >> N;

    // 자릿수를 편하게 구하기 위해 N을 문자로 변환
    string input = to_string(N);
    // 자연수 N의 생성자 M을 탐색
    for(int M = N - 9 * input.length(); M < N; ++M)
    {
        // 분해합을 M로 초기화
        int sum = M;
        // 분해합에 M의 각 자리 숫자를 가산
        int temp = M;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        // 분해합이 자연수 N과 같을 경우
        if(sum == N)
        {
            cout << M;  // 탐색한 M 출력
            return 0;   // 종료
        }
    }

    // 분해합을 발견하지 못할 경우 0 출력
    cout << 0;
}