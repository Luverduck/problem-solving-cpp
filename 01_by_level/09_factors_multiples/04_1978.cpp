#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // 입력의 개수
    cin >> n;

    int num; // 입력받은 수
    int count = 0; // 소수의 개수

    for(int i = 0; i < n; ++i)
    {
        // 입력받은 수 저장
        cin >> num;
        if(num == 1) continue; // 1은 소수가 아니므로 다음 루프로 이동

        // 소수인지 여부를 true로 초기화
        bool isPrime = true;

        // 2와 (num-1) 사이의 수 j에 대하여 연산
        for(int j = 2; j < num; ++j) // 2는 소수이므로 j를 2부터 시작하여 루프 진입 방지
        {
            // num이 j로 한 번이라도 나누어 떨어질 경우
            if(num % j == 0)
            {
                // 1과 자기 자신을 제외한 수 j를 약수로 가지므로 소수가 아님
                isPrime = false;
                // 불필요한 연산을 제거하기 위해 break
                break;
            }
        }

        // num이 소수일 경우 count 증가
        if(isPrime == true) count++;
    }

    // 입력받은 수들 중 소수의 개수 출력
    cout << count;
}