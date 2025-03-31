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

    string input;
    cin >> input;

    if(input == "SONGDO")
        cout << "HIGHSCHOOL";
    else if(input == "CODE")
        cout << "MASTER";
    else if(input == "2023")
        cout << "0611";
    else if(input == "ALGORITHM")
        cout << "CONTEST";
}