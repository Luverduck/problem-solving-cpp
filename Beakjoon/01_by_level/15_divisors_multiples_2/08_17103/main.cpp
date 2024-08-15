#include <iostream>
#include <vector>

using namespace std;

const int N_MAX = 1000000;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 길이 1000001인 bool형 배열의 모든 요소를 false로 초기화
    bool nums[N_MAX + 1] { false, };
    // 배열의 2 ~ 1000000번째 요소의 값을 true로 변경
    fill(nums + 2, nums + N_MAX, true);
    // 배열의 index가 소수인 요소만 true가 되도록 에라토스테네스의 체 알고리즘 실행
    for(int i = 2; i * i <= N_MAX; ++i)
    {
        if(nums[i])
        {
            for(int j = i * i; j <= N_MAX; j += i)
            {
                if(nums[j]) nums[j] = false;
            }
        }
    }

    // 배열에서 소수만 벡터에 저장
    vector<int> prime;
    for(int i = 2; i <= N_MAX; ++i)
    {
        if(nums[i])
            prime.emplace_back(i);
    }

    // 테스트 케이스의 수만큼 반복
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        // 입력받은 짝수 N
        int N;
        cin >> N;

        // N에 대한 골드바흐 분할의 수 계산
        int cnt = 0;
        for(int i = 0; i < prime.size() && prime[i] <= N / 2; ++i)
        {
            // 벡터에 저장된 소수 p
            int p = prime[i];
            // 배열의 N-p번째 요소가 소수일 경우 골드바흐 분할의 수 증가
            int q = N - p;
            if(q >= 2 && nums[q])
                cnt++;
        }
        // 짝수 N에 대한 골드바흐 분할의 수 출력
        cout << cnt << '\n';
    }
}
