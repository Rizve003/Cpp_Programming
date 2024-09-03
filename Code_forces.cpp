/*----------------1972B_Coin_Games--------------*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int countU = 0;

        for (char c : s)
        {
            if (c == 'U')
            {
                countU++;
            }
        }
        if (countU % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*-------------------------------------B.Three Brothers------------------------*/

#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cin >> a;
    cin >> b;

    if ((a == 1 && b == 2) || (a == 2 && b == 1))
    {
        cout << "3" << endl;
    }
    else if ((a == 1 && b == 3) || (a == 3 && b == 1))
    {
        cout << "2" << endl;
    }
    else if ((a == 2 && b == 3) || (a == 3 && b == 2))
    {
        cout << "1" << endl;
    }

    return 0;
}
