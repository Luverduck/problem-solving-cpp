#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	// 출입 기록의 개수 n
    int n;
    cin >> n;

    // 회사에 있는 사람의 이름을 내림차순으로 정렬하여 저장할 set
    set<string, greater<>> s; // greater<>로 set의 정렬 기준 설정

    // 사람의 이름(name)과 출/퇴근 여부(flag)
    string name, flag;
    for(int i = 0; i < n; ++i)
    {
        cin >> name >> flag;
        // 사람의 이름(key)이 set에 저장되어있지 않은 경우 해당 이름을 set에 저장한다.
        if(flag.compare("enter") == 0)
        {
            s.insert(name);
            continue;
        }
        // 그렇지 않은 경우 해당 이름을 set에서 제거한다.
        s.erase(s.find(name));
    }

    // set에 저장된 이름을 전부 출력
    for(auto& name : s)
        cout << name << "\n";
}