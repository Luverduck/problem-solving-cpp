#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // num을 가장 작은 종말의 수로 초기화
    int num = 666;  // 가장 작은 종말의 수 666
    int idx = 0;    // 종말의 수 인덱스

    // num을 1씩 증가시키면서 종말의 수 탐색
    int temp = 0;
    while(true)
    {
        // 임시 변수 temp에 num의 값 대입
        temp = num;
        // temp가 666으로 나누어질 경우 종말의 수
        while(temp >= 666)
        {
            // temp를 1000으로 나눈 나머지가 666일 경우
            if(temp % 1000 == 666)
            {
                idx++; // 종말의 수 인덱스 가산
                break;
            }
            // 그렇지 않을 경우 10으로 나눠 가장 낮은 자리 숫자 제거
            temp /= 10;
        }
        // 발견한 종말의 수의 인덱스가 N과 같을 경우
        if(idx == N)
        {
            // 결과 출력
            cout << num;
            break;
        }
        // num을 1만큼 증가
        num++;
    }
}