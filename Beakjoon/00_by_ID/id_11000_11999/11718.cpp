#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    while(getline(cin, temp))
        cout << temp << "\n";
}