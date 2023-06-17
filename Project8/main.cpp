//HM_ex_1_26.03.2023 
#include <iostream>
using namespace std;
int Figura(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
            {
                cout << char(219);
            }
            else
            {
                cout << char(255);
            }
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int X, Y;
    cout << " Enter height " << endl;
    cin >> X;
    cout << " Enter width " << endl;
    cin >> Y;
    system("pause");
    return 0;
}
//HM_ex_3_26.03.2023_
#include <locale>
#include <stdio.h>
int main()
{
    int num = 1;
    int n;
    setlocale(LC_CTYPE, "ukr");
    printf("¬ведiть n=");
    scanf_s("%i", &n);
    for (int i = 2; i < n; ++i)
        for (int a = 2; a < i; ++a)
        {
            if (i % a == 0)
                break;
            else if (i == a + 1)
                num++;
        }
    printf("%i", num);
    return 0;
}
//HM_ex_5_26.03.2023 
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>
using namespace std;

typedef istream_iterator<int> ii;

int main(int argc, char* argv[])
{
    fstream fin("input.txt", ios::in);

    if (!fin)
    {
        cerr << "error: couldn't open file.\n";
        exit(1);
    }

    vector<int> coll((ii(fin)), ii());
    cout << *max_element(coll.begin(), coll.end());

    cout << "\n\n";
    return 0;
}