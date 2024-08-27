#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 수 N과 기수 B를 저장
    string N;
    int B;
    cin >> N >> B;

    // 10진법 변환값 변수를 0으로 초기화
    int decimal = 0;

    // B진법 수 N에서 한 자리씩 10진법으로 변환
    for(char& digit : N)
    {
        decimal *= B;

        if(digit < 'A')
            decimal += (digit- '0');
        else
            decimal += (digit - 'A') + 10;
    }

    // 10진법 변환값 출력
    cout << decimal;
}