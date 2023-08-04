#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number ";
    cin >> num;

    for (int row = 0; row < num; row++)
    {

        int k = num;
        for (int col = 0; col < 2 * num - 1; col++) // overall Columns untill last
        {
            if (col < row)  // spacing before print *
            {
                cout << "  ";
            }

            else if (k < 2*row - 1) // printing *
            {

                cout << "* ";

                k--;
            }

    
        }
        cout << endl;
    }
    return 0;
}