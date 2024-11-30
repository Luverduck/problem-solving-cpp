#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<string, string>> birth_name(N);
    string name, dd, mm, yyyy;
    for(int i = 0; i < N; ++i)
    {
        cin >> name >> dd >> mm >> yyyy;
        if(mm.size() < 2)
            mm.insert(0, "0");
        string birth = yyyy.append(mm).append(dd);
        birth_name[i].first = birth;
        birth_name[i].second = name;
    }

    sort(birth_name.begin(), birth_name.end(), greater<>());

    cout << birth_name[0].second << '\n' << birth_name[N - 1].second;
}