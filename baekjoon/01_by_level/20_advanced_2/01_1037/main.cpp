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

    // 약수의 개수
    int n;
    cin >> n;

    // 진약수를 저장할 vector
    vector<long long> v(n);

    // vector에 진약수 저장
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    // vector 정렬
    sort(v.begin(), v.end());

    // vector의 맨 앞과 맨 뒤의 원소의 곱 출력
    cout << v[0] * v[v.size() - 1];
}