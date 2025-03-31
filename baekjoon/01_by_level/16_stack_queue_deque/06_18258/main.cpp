#include <iostream>
#include <queue>

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

    // 큐 생성
    queue<int> q;

    // N개의 명령어를 입력받아 실행
    string cmd;
    for(int i = 0; i < N; ++i)
    {
        cin >> cmd;
        // push : 정수 X를 큐에 넣는다.
        if(cmd == "push")
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        // pop : 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        else if(cmd == "pop")
        {
            if(q.empty())
                cout << "-1\n";
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        // size : 큐에 들어있는 정수의 개수를 출력한다.
        else if(cmd == "size")
        {
            cout << q.size() << '\n';
        }
        // empty : 큐가 비어있으면 1, 아니면 0을 출력한다.
        else if(cmd == "empty")
        {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        // front : 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        else if(cmd == "front")
        {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        }
        // back : 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
        else if(cmd == "back")
        {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }
}