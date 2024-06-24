#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    if(A + B + C != 180)
        cout << "Error";
    else if((A == 60) && (B == 60) && (C == 60))
        cout << "Equilateral";
    else if((A == B) || (B == C) || (C == A))
        cout << "Isosceles";
    else
        cout << "Scalene";
}