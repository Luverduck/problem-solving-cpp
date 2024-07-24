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

    // 집합 A, B의 원소 수
    int nA, nB;
    cin >> nA >> nB;

    // 집합 A, B의 원소를 저장할 vector 생성
    vector<int> vA(nA);
    vector<int> vB(nB);

    // vA에 집합 A의 원소 저장
    for(int i = 0; i < nA; ++i)
        cin >> vA[i];

    // vB에 집합 B의 원소 저장
    for(int i = 0; i < nB; ++i)
        cin >> vB[i];

    // 이진 탐색을 위한 정렬
    sort(vA.begin(), vA.end());
    sort(vB.begin(), vB.end());

    // 집합 A와 B의 원소 수의 합
    int total = nA + nB;
    // 집합 A와 B의 교집합 원소의 수
    int common = 0;
    for(int i = 0; i < nA; ++i)
        if(binary_search(vB.begin(), vB.end(), vA[i]))
            common++;

    // 대칭 차집합 원소 수
    cout << total - (2 * common);
}