#include <iostream>
#include <vector>

using namespace std;

// 코드 1의 수행 횟수
int count = 0;

// 알고리즘
int MenOfPassion(const vector<int>& vec, const int n)
{
    int idx = n / 2;
	int ret = vec[idx]; // # 코드 1
	count++;

    return ret;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    fill(vec.begin(), vec.end(), 1);

    MenOfPassion(vec, n);

	cout << count << "\n0";
}