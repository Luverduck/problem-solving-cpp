#include <iostream>
#include <set>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    set<string> s;
    s.emplace("Never gonna give you up");
    s.emplace("Never gonna let you down");
    s.emplace("Never gonna run around and desert you");
    s.emplace("Never gonna make you cry");
    s.emplace("Never gonna say goodbye");
    s.emplace("Never gonna tell a lie and hurt you");
    s.emplace("Never gonna stop");

    int N;
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; ++i)
    {
        string temp;
        getline(cin, temp);
        if(s.find(temp) == s.end())
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}