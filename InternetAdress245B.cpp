#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t p = s.find('p');
    s.insert(p + 1, "://");

    size_t ru = s.find("ru", p + 5);
    if (ru + 2 != s.length())
    {
        s.insert(ru + 2, "/");
    }
    s.insert(ru, ".");

    cout << s << endl;
    return 0;
}
