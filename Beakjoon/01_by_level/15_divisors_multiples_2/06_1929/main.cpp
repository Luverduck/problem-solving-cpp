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

    int M, N;
    cin >> M >> N;

    // 1부터 N까지의 숫자를 index로 하는 배열 생성
    bool nums[N + 1] { false, };
    // 배열의 0, 1번째 요소를 제외한 나머지 요소를 true로 초기화
    fill(nums + 2, nums + N + 1, true);

    // 2부터 N의 제곱근까지에 대하여 소수 판정
    for(int i = 2; i * i <= N; ++i)
    {
        // i가 소수가 아닐 경우 건너뜀
        if(!nums[i]) continue;
        // i가 소수일 경우 i의 배수를 소수가 아님(false)으로 변경
        for(int j = i * i; j <= N; j += i)
        {
            if(nums[j])
                nums[j] = false;
        }
    }

    // M부터 N까지의 범위 안에 있는 모든 소수 출력
    for(int i = M; i <= N; ++i)
    {
        if(nums[i])
            cout << i << "\n";
    }
}