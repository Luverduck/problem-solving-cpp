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

    // 길이 246912 + 1의 bool형 배열을 false로 초기화
    int num_max = 2 * 123456;
    bool nums[num_max + 1] { false, };
    // 배열의 2 ~ 246912번째 요소에 true 대입
    fill(nums + 2, nums + num_max + 1, true);

    // 에라토스테네스의 체 알고리즘으로 index가 소수인 요소만 true가 되도록 변경
    for(long long i = 2; i * i <= num_max; ++i)
    {
        if(nums[i])
        {
            for(long long j = i * i; j <= num_max; j += i)
            {
                if(nums[j])
                    nums[j] = false;
            }
        }    
    }

    // (n + 1, 2 * n] 안에 포함된 소수의 개수 출력
    int n;
    while(true)
    {
        cin >> n;
        // n이 0일 경우 입력의 끝
        if(n == 0) break;
        // 순회할 배열의 범위 지정
        int P = n;
        int Q = 2 * n;
        // 소수의 개수 계산
        int cnt = 0;
        for(int i = P + 1; i <= Q; ++i)
        {
            if(nums[i])
                cnt++;
        }
        cout << cnt << '\n';
    }
}