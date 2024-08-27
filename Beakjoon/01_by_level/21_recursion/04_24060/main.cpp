#include <iostream>

using namespace std;

// 배열에 저장할 수 있는 횟수 (K부터 시작하여 0이 될 때까지 데이터를 저장할 때마다 1씩 감소시킨다.)
static int cnt = 0;
// K번째로 배열에 저장된 값 (K = 0일 때만 갱신)
static int saved = 0;
// K = 0이 된 후의 재귀 호출 및 연산을 종료시키기 위한 flag
static bool flag = false;
// 정렬된 데이터 그룹 병합에 사용되는 임시 배열
static int tmp[500000] { 0, };

// 병합 정렬
void merge_sort(int arr[], int left, int right);
// 정렬된 데이터 그룹을 병합
void merge(int arr[], int left, int right, int mid);

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, K;
    cin >> N >> K;

    cnt = K;

    int arr[N] { 0, };
    for(int n = 0; n < N; ++n)
        cin >> arr[n];

    merge_sort(arr, 0, N - 1);

    cout << (cnt == 0 ? saved : -1);
}

void merge_sort(int A[], int p, int r)
{
    // ✅ flag가 true이면 코드를 실행하지 않는다.
    if(flag) return;
    if(p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
};

void merge(int A[], const int p, const int q, const int r)
{
    // ✅ flag가 true이면 코드를 실행하지 않는다.
    if(flag) return;

    int i = p;
    int j = q + 1;
    int t = 1;

    while(i <= q && j <= r)
    {
        if(A[i] <= A[j])
        {
            tmp[t] = A[i];
            t++;
            i++;
            continue;
        }
        tmp[t] = A[j];
        t++;
        j++;
    }

    while(i <= q)
    {
        tmp[t] = A[i];
        t++;
        i++;
    }

    while(j <= r)
    {
        tmp[t] = A[j];
        t++;
        j++;
    }

    i = p;
    t = 1;
    while(i <= r)
    {
        A[i] = tmp[t];

        // ✅ 배열에 값을 저장할 때마다 실행
        if(cnt > 0)
        {
            // 배열에 저장할 수 있는 횟수 감산
            cnt--;
            // 횟수가 0일 경우
            if(cnt == 0)
            {
                // saved 갱신
                saved = A[i];
                // 이후의 연산을 생략하기 위해 flag를 true로 변경
                flag = true;
            }
        }
        i++;
        t++;
    }
};