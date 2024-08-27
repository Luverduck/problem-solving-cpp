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

    // 사람들이 만난 기록의 수 N
    int N;
    cin >> N;

    // 사람들의 이름을 저장할 셋 생성
    set<string> s;
    // 초기에 셋에 총총이의 이름(ChongChong)을 저장
    s.insert("ChongChong");

    // 사람들이 만난 모든 기록 확인
    for(int n = 0; n < N; ++n)
    {
        // 만난 두 사람의 이름을 A, B에 저장
        string A, B;
        cin >> A >> B;
        // 셋에 둘 중 한 사람의 이름이 저장되어 있으면
        if(s.find(A) != s.end() || s.find(B) != s.end())
        {
            // 두 사람의 이름을 모두 셋에 저장
            s.insert(A);
            s.insert(B);
        }
    }

    // 셋에 저장된 이름의 수 출력
    cout << s.size();
}