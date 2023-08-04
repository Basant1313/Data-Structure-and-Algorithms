#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the Number : ";
    cin >> num;

    for (int row = 0; row < num; row++)
    {
        int k = 0;
        for (int col = 0; col < 2 * num - 1; col++) // Exectuion all columns Required untill last
        {
            if (col < num - (row + 1)) // condition for printing spaces before printing *
            {
                cout << "  ";
            }
            else if (k < 2 * row+ 1)  // condition along with new variable to count * and print
            {
                if(k==0 || k==2*row || row==num-1){ // condition for printing * at Border of Pyramid
                    cout << "* ";
                }
                else{
                    cout<<"  "; // conditon for printing spaces in inside pyramid
                }
                k++;
            }
            else
            {
                cout << "  "; // condition for printing spaces after printing *
            }
        }
        cout<<endl;
    }
    return 0;
}