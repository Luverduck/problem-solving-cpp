#include <iostream>
#include <vector>

using namespace std;

long long count = 0;

int MenOfPassion(const vector<int>& vec, const long long n)
{
    int sum = 0;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            for(int k = 1; k <= n; ++k)
            {
                sum += vec[i] * vec[j] * vec[k];
                count++;
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

    cout << count << "\n3";
}