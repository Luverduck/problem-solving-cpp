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

    // 명령어의 수 N
    int N;
    cin >> N;

    // 스택 생성
    stack<int> s;

    // N개의 명령어를 입력받아 실행
    int cmd;
    for(int i = 0; i < N; ++i)
    {
        cin >> cmd;
        switch(cmd)
        {
            // 1 X : 정수 X를 스택에 넣는다.
            case 1:
                int X;
                cin >> X;
                s.push(X);
                break;
            // 2 : 스택에서 맨 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
            case 2:
                if(s.empty())
                    cout << "-1\n";
                else
                {
                    cout << s.top() << '\n';
                    s.pop();
                }
                break;
            // 3 : 스택에 들어있는 정수의 개수를 출력한다.
            case 3:
                cout << s.size() << '\n';
                break;
            // 4 : 스택이 비어있으면 1, 아니면 0을 출력한다.
            case 4:
                cout << (s.empty() ? "1" : "0") << '\n';
                break;
            // 5 : 스택의 가장 앞에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
            case 5:
                cout << (s.empty() ? -1 : s.top()) << '\n';
                break;
        }
    }
}