#include <iostream>
#include <stack>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력받은 정수의 개수 K
    int K;
    cin >> K;

    // 스택 생성
    stack<int> s;

    // 입력받은 정수를 규칙에 따라 스택에 저장
    int temp;
    for(int i = 0; i < K; ++i)
    {
        cin >> temp;
        switch(temp)
        {
            // 0 : 스택에서 가장 마지막에 저장된 정수 꺼내기
            case 0:
                s.pop();
                break;
            // 그 외 : 스택에 정수 저장
            default:
                s.push(temp);
                break;
        }
    }

    // 스택에 저장된 정수의 합 계산
    int sum = 0;
    while(!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    // 스택에 저장된 정수의 합 출력
    cout << sum;
}