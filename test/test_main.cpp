#include <iostream>
#include <ctime>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 변수 선언
    clock_t start, end;

    // 시작 시각
    start = clock();

    // [SourceCode] START



    // [SourceCode] END

    // 종료 시각
    end = clock();

    // 실행 시간 출력
    cout << '\n' << end - start << "[ms]";

    return 0;
}