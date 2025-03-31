#include <iostream>
#include <algorithm>

using namespace std;

long long binaryToDecimal(string& binary)
{
    long long res = 0;
    for (int i = 0; i < binary.length(); ++i)
    {
        res *= 2;
        res += binary[i] - '0';
    }
    return res;
}

string decimalToBinary(long long decimal)
{
    string res = "";
    while (decimal)
    {
        res.append(to_string(decimal % 2));
        decimal /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

void solution()
{
    string b1, b2;
    cin >> b1 >> b2;
    long long res1 = binaryToDecimal(b1);
    long long res2 = binaryToDecimal(b2);
    cout << decimalToBinary(res1 * res2);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}