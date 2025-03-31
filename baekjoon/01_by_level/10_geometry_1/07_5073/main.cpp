#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    while(cin >> A >> B >> C)
    {
        int sum = A + B + C;
        if(sum == 0) break;

        int max_value = max(max(A, B), max(B, C));

        if(sum - (2 * max_value) <= 0)
            cout << "Invalid\n";
        else if((A == B) && (B == C))
            cout << "Equilateral\n";
        else if((A == B) || (B == C) || (A == C))
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }
}