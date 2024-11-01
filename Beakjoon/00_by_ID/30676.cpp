#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int lambda;
    cin >> lambda;

    if(lambda >= 620)
        cout << "Red";
    else if(lambda >= 590)
        cout << "Orange";
    else if(lambda >= 570)
        cout << "Yellow";
    else if(lambda >= 495)
        cout << "Green";
    else if(lambda >= 450)
        cout << "Blue";
    else if(lambda >= 425)
        cout << "Indigo";
    else
        cout << "Violet";
}