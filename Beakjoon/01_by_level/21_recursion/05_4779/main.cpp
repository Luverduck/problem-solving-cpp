#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// 재귀 함수
void cantor(int p)
{
    // p가 1일 때(3^0) 하나의 '-' 출력 후 return
    if(p == 1)
    {
        cout << "-";
        return;
    }

    // p가 1이 아닐 때 (3의 거듭제곱)
    // '-', ' ', '-' 각각의 출력 횟수
    int size = p / 3;
    // '-'를 출력 횟수만큼 출력
    cantor(size);
    // ' '을 출력 횟수만큼 출력
    cout << string(size, ' ');
    // '-'를 출력 횟수만큼 출력
    cantor(size);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력받은 정수 N
    int N;
    while(cin >> N)
    {
        // 3^N을 인수로 전달
        cantor(pow(3, N));
        cout << '\n';
    }
}