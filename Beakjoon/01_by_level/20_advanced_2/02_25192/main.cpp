#include <iostream>
#include <set>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 채팅방 기록 수
    int N;
    cin >> N;

    // 곰곰티콘이 사용된 횟수
    int result = 0;

    // 유저의 닉네임을 저장할 set 생성
    set<string> s;

    // 유저의 닉네임을 set에 저장
    for(int n = 0; n < N; ++n)
    {
        string input;
        cin >> input;
        // 입력받은 문자열이 ENTER일 경우
        if(input == "ENTER")
        {
            // 현재 set에 저장된 닉네임 수를 result에 가산
            result += s.size();
            // set 비우기
            s.clear();
            // 다음 루프로 점프
            continue;
        }
        // 그 외의 경우 set에 닉네임 저장
        s.insert(input);
    }
    // 마지막 ENTER 이후 set에 저장된 닉네임의 수를 result에 가산
    result += s.size();

    // 곰곰티콘이 사용된 횟수 출력
    cout << result;
}