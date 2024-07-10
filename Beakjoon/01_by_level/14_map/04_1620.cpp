#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// 포켓몬의 번호를 index, 이름을 요소의 값으로 하는 배열
string no_name[100001];
// 포켓몬의 이름을 key, 번호를 value로 하는 map (정렬하지 않는 map)
unordered_map<string, int> name_no;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 도감의 포켓몬 수 N, 문제 수 M
    int N, M;
    cin >> N >> M;

    // 포켓몬 이름 저장
    string name;
    for(int i = 1; i <= N; ++i)
    {
        cin >> name;
        // 배열에 포켓몬 이름 저장
        no_name[i] = name;
        // map에 포켓몬 이름, 번호 저장
        name_no.insert( {name, i} );
    }

    // 문제에 대한 답 출력
    string target;
    for(int i = 0; i < M; ++i)
    {
        cin >> target;
        // 문제가 번호로 주어질 경우
        if(target[0] < 'A')
            // 배열에서 해당 번호의 index에 저장된 값 출력
            cout << no_name[stoi(target)] << "\n";
        // 문제가 이름으로 주어질 경우
        else
            // map에서 해당 이름을 key로 하는 요소의 value 출력
            cout << name_no[target] << "\n";
    }
}