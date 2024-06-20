#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 저장
    long A, B, V;
    cin >> A >> B >> V;

    // 높이 V-A에 도달하는 데 걸린 일 수
    long days = (V - A) / (A - B);
    // 높이 V-A에 도달하기 위해 필요한 일 수
    // - 높이 V-A에 도달한 경우 0, 그렇지 못한 경우 0 ~ days 사이의 값
    long remain = (V - A) % (A - B);

    // 결과 출력
    // remain이 0일 경우 하루만 더 가면 높이 V에 도달
    // remain이 0이 아닐 경우 이틀을 더 가야 높이 V에 도달
    cout << (remain == 0 ? days + 1 : days + 2) << "\n";
}