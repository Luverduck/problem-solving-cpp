#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

	// 듣도 못한 사람 수 N, 보도 못한 사람 수 M
    int N, M;
    cin >> N >> M;

    // 듣도 못한 사람을 저장할 vector
    vector<string> vectorN(N);
    // 듣도 보도 못한 사람을 저장할 vector
    vector<string> vectorM;

    // 이름을 임시로 저장할 변수
    string name;
    // 듣도 못한 사람의 이름을 vecN에 저장
    for(int i = 0; i < N; ++i)
    {
        cin >> name;
        vectorN[i] = name;
    }

    // 이진 탐색을 위한 정렬
    sort(vectorN.begin(), vectorN.end());

    // 보도 못한 사람의 이름이 vecN에 저장되어있을 경우 vecM에 저장
    for(int i = 0; i < M; ++i)
    {
        cin >> name;
        if(binary_search(vectorN.begin(), vectorN.end(), name))
            vectorM.emplace_back(name);
    }

    // 사전순 출력을 위한 정렬
    sort(vectorM.begin(), vectorM.end());

    // 결과 출력
    cout << vectorM.size() << "\n";
    for(vector<string>::iterator iter = vectorM.begin(); iter != vectorM.end(); ++iter)
        cout << *iter << "\n";
}