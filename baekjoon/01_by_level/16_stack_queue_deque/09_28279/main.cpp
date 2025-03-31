#include <iostream>
#include <deque>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 명령어의 수 N
    int N;
    cin >> N;

    // 덱 생성
    deque<int> dq;

    // N개의 명령어를 입력받아 실행
    int code;
    int X;
    for(int n = 0; n < N; ++n)
    {
        cin >> code;
        switch(code)
        {
            // 1 X  : 정수 X를 덱의 앞에 넣는다. (1 ≤ X ≤ 100,000)
            case 1:
                cin >> X;
                dq.push_front(X);
                break;
            // 2 X  : 정수 X를 덱의 뒤에 넣는다. (1 ≤ X ≤ 100,000)
            case 2:
                cin >> X;
                dq.push_back(X);
                break;
            // 3    : 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            case 3:
                if(dq.empty())
                    cout << "-1\n";
                else
                {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                }
                break;
            // 4    : 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            case 4:
                if(dq.empty())
                    cout << "-1\n";
                else
                {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                }
                break;
            // 5    : 덱에 들어있는 정수의 개수를 출력한다.
            case 5:
                cout << dq.size() << '\n';
                break;
            // 6    : 덱이 비어있으면 1, 아니면 0을 출력한다.
            case 6:
                cout << (dq.empty() ? 1 : 0) << '\n';
                break;
            // 7    : 덱에 정수가 있다면 맨 앞의 정수를 출력한다. 없다면 -1을 대신 출력한다.
            case 7:
                if(dq.empty())
                    cout << "-1\n";
                else
                    cout << dq.front() << '\n';
                break;
            // 8    : 덱에 정수가 있다면 맨 뒤의 정수를 출력한다. 없다면 -1을 대신 출력한다.
            case 8:
                if(dq.empty())
                    cout << "-1\n";
                else
                    cout << dq.back() << '\n';
                break;
        }
    }
}
