#include <iostream>
#include <vector>

using namespace std;

long long count = 0;

int MenOfPassion(const vector<int>& vec, const long long n)
{
    int sum = 0;

    for(int i = 1; i <= n - 1; ++i)
    {
        for(int j = i + 1; j <= n; ++j)
        {
            sum += vec[i] * vec[i];
            count++;
        }
    }

    return sum;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<int> vec(n);
    fill(vec.begin(), vec.end(), 1);

    MenOfPassion(vec, n);

    cout << count << "\n2";
}