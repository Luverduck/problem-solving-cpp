#include <iostream>
#include <stack>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스의 수
    int T;
    cin >> T;

    // 테스트 케이스의 수만큼 반복
    for(int t = 0; t < T; ++t)
    {
        // 스택 생성
        stack<char> s;

        // 입력받은 문자열 저장
        string input;
        cin >> input;

        // 문자열의 맨 앞 문자부터 순회
        for(auto& c : input)
        {
            // 현재 위치의 문자가 '('일 경우
            if(c == '(')
                s.push(c); // 스택에 저장
            // 현재 위치의 문자가 ')'일 경우
            else
            {
                // 스택이 비어있지 않으면서 스택의 맨 위에 저장된 값이 '('일 경우
                if(!s.empty() && s.top() == '(')
                    s.pop(); // 괄호 쌍을 이루므로 스택에서 '(' 삭제
                else
                    s.push(c); // 괄호 쌍을 이루지못한 ')'를 스택에 저장
            }
        }
        // 괄호 쌍을 이루지 못한 괄호가 없는 경우 스택이 비어있으므로 'YES' 출력
        cout << (s.empty() ? "YES" : "NO") << '\n';
    }
}
