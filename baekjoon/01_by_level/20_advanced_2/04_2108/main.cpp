#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 수의 개수 N
    int N;
    cin >> N;

    // 입력받은 정수의 개수를 저장할 배열
    // - 인덱스 : 입력받은 정수의 값
    // - 요소에 저장된 값 : 해당 정수의 개수
    int numbers[8001] { 0 };

    // 배열 초기화 과정에서 계산할 수 있는 값
    int v_sum = 0;          // 1) 합
    int v_max_cnt = 0;      // 2) 가장 많이 입력받은 값의 입력받은 횟수
    int v_max = -4001;      // 3) 최대값
    int v_min = 4001;       // 4) 최소값

    // 배열 초기화
    for(int n = 0; n < N; ++n)
    {
        // 입력받은 정수 저장
        int temp;
        cin >> temp;
        // 입력받은 정수 인덱스 요소의 값을 1만큼 증가 (정수의 개수 증가)
        numbers[temp + 4000]++;
        // 1) 정수의 합에 가산
        v_sum += temp;
        // 2) 가장 많이 입력받은 값의 입력받은 횟수 갱신
        v_max_cnt = numbers[temp + 4000] > v_max_cnt ? numbers[temp + 4000] : v_max_cnt;
        // 3) 최대값 갱신
        v_max = temp > v_max ? temp : v_max;
        // 4) 최소값 갱신
        v_min = temp < v_min ? temp : v_min;
    }

    // 1. 산술평균 :  N개의 수들의 합을 N으로 나눈 값
    int mean = round(static_cast<double>(v_sum) / N);
    if(mean == -0) mean = 0; // ⭐ 산술평균이 -0일 경우에 대한 보정
    cout << mean << '\n';

    // 2. 중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
    int median = 0;

    // 3. 최빈값 : N개의 수들 중 가장 많이 나타나는 값
    int mode;

    // 수열에서 중앙값의 위치
    int pos_median = (N + 1) / 2;
    // 수열에서 중복값의 시작 위치
    int pos_start = 0;
    // 최빈값 갱신 가능 횟수 (두 번째로 작은 값을 찾기 위해 2로 초기화)
    int cnt_update = 2;

    // 배열을 순회하며 중앙값과 최빈값 탐색
    for(int i = 0; i < 8001; ++i)
    {
        // 배열의 i번째 요소의 값이 0인 경우 (정수 i가 입력받은 정수가 아닌 경우)
        if(numbers[i] == 0) continue; // 다음 루프로 이동

        // 중앙값의 위치가 중복값의 시작과 끝 사이인 경우
        if(pos_start < pos_median && pos_median <= pos_start + numbers[i])
            median = i - 4000;  // 중앙값 갱신

        // 배열의 i번째 요소의 값이 가장 많이 입력받은 값의 입력받은 횟수와 같은 경우
        if(numbers[i] == v_max_cnt && cnt_update > 0) // 최빈값의 갱신 가능 횟수가 0보다 클 때만
        {
            mode = i - 4000;    // 최빈값 갱신
            cnt_update--;       // 최빈값의 갱신 가능 횟수 감소
        }

        // 중복값의 시작 위치를 다음 중복값의 시작 위치로 변경
        pos_start += numbers[i];
    }

    // 중앙값과 최빈값 출력
    cout << median << '\n';
    cout << mode << '\n';

    // 4. 범위 : N개의 수들 중 최댓값과 최솟값의 차이
    cout << v_max - v_min;
}