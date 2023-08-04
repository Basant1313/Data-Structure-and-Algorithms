#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number ";
    cin >> num;

    for (int row = 0; row < num; row++)
    {

        int k = 0;
        for (int col = 0; col < 2 * num - 1; col++) // overall Columns untill last
        {
            if (col < num - (row + 1))  // spacing before print *
            {
                cout << "  ";
            }

            else if (k < 2*row + 1) // printing *
            {
                
                cout << "* ";
                

                k++;
            }

            else
            {
                cout << "  "; // printing spaces after printing *
            }
        }
        cout << endl;
    }
    return 0;
}