#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // set에 저장할 요소 개수 N, 검사할 문자열의 개수 M
    int N, M;
    cin >> N >> M;

    // set에 N개의 문자열 저장
    unordered_set<string> s; // 성능을 위해 정렬이 없는 set 사용
    string temp;
    for(int i = 0; i < N; ++i)
    {
        cin >> temp;
        s.insert(temp);
    }

    // M개의 문자열 각각에 대하여 순차 탐색으로 set에 해당 문자열이 저장되어 있는지 확인
    int count = 0;
    for(int i = 0; i < M; ++i)
    {
        cin >> temp;
        if(s.find(temp) != s.end())
            count++;
    }

    // M개의 문자열 중 set에 저장되어있는 문자열의 개수 출력
    cout << count;
}