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

    // 계산 결과에 포함된 숫자의 개수를 저장할 배열
    int nums[10] { 0, };

    // 세 개의 자연수 A, B, C
    long long A, B, C;
    cin >> A >> B >> C;

    // 세 자연수의 곱 계산
    long long result = A * B * C;

    // 계산 결과를 자릿수별로 확인하여 nums에 가산
    while(result > 0)
    {
        // 자리 숫자를 index로 하는 nums의 요소에 가산
        nums[result % 10]++;
        // 다음 자리의 숫자 계산을 위한 연산
        result /= 10;
    }

    // nums의 모든 요소 출력
    for(auto& i : nums)
        cout << i << '\n';
}