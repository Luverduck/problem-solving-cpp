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

    // 학생의 수 N
    int N;
    cin >> N;

    // 임시 대기열
    stack<int> s;

    // 찾을 대상 번호표
    int target = 1;
    // 입력받은 번호표를 처리할 때마다 N에서 1씩 감산
    int num;
    while(N--)
    {
        // 입력받은 번호표 저장
        cin >> num;
        // 입력받은 번호표가 대상 번호표와 같으면
        if(num == target)
            target++; // 대상 번호표를 다음 번호로 갱신
        // 그렇지 않을 경우
        else
            s.push(num); // 임시 대기열에 저장

        // 임시 대기열에서 대상 번호표를 조회
        while(!s.empty() && s.top() == target)
        {
            s.pop();
            target++;
        }
    }

    // 결과 출력
    cout << (s.empty() ? "Nice" : "Sad");
}