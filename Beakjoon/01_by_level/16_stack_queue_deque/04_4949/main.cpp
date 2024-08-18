#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력 문자열
    string input;
    while(true)
    {
        // 입력 문자열을 줄 단위로 저장
        getline(cin, input);
        // 문자열이 마침표 '.'일 경우 종료
        if(input == ".") break;

        // 스택 생성
        stack<char> s;

        // 문자열의 맨 앞 문자부터 순회
        for(auto& c : input)
        {
            // 현재 위치의 문자가 '(' 또는 '['인 경우
            if(c == '(' || c == '[')
                s.push(c); // 스택에 저장
            // 현재 위치의 문자가 ')'인 경우
            else if(c == ')')
            {
                // 스택이 비어있지 않으면서 스택의 맨 위에 저장된 값이 '('일 경우
                if(!s.empty() && s.top() == '(')
                    s.pop(); // 괄호 쌍을 이루므로 스택에서 '(' 삭제
                else
                    s.push(c); // 괄호 쌍을 이루지못한 ')'를 스택에 저장
            }
            // // 현재 위치의 문자가 ']'인 경우
            else if(c == ']')
            {
                // 스택이 비어있지 않으면서 스택의 맨 위에 저장된 값이 '['일 경우
                if(!s.empty() && s.top() == '[')
                    s.pop(); // 괄호 쌍을 이루므로 스택에서 '[' 삭제
                else
                    s.push(c); // 괄호 쌍을 이루지못한 ']'를 스택에 저장
            }
        }

        // 괄호 쌍을 이루지 못한 괄호가 없는 경우 스택이 비어있으므로 'yes' 출력
        cout << (s.empty() ? "yes" : "no") << '\n';
    }
}
