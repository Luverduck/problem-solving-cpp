#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 참가자의 수 N
    int N;
    // 티셔츠 사이즈별 신청자 수 (0번째 요소부터 각각 S, M, L, XL, XXL, XXXL)
    int size[6] { 0, };
    // 티셔츠의 주문 단위 T, 펜의 주문 단위 P
    int T, P;

    // 입력 저장
    cin >> N;
    for(int i = 0; i < 6; ++i)
        cin >> size[i];
    cin >> T >> P;

    // 티셔츠의 구매 묶음 수 t (T개씩 t묶음 구매)
    int t = 0;
    for(int i = 0; i < 6; ++i)
        t += size[i] % T == 0 ? size[i] / T : size[i] / T + 1;
    // 펜의 구매 묶음 수 p (P개씩 p묶음 구매)
    int p = N / P;
    // 펜의 단위 구매 수 (1개씩 p_unit개 구매)
    int p_unit = N % P;

    // 결과 출력
    cout << t << '\n' << p << " " << p_unit;
}