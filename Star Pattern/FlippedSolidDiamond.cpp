#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Upper Part
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < n - i; ++j) // Left Half Inverted Pyramid
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) // Printing Space Pyramid (i.e= Invisible Pyramid)
        {
            cout << "  ";
        }

        for (int j = 0; j < n - i; ++j) // Right Half Inverted Pyramid
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower Part
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i + 1; ++j) // Left Half Pyramid
        {
            cout << "* ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; ++j) //Printing Space Inverted Half Pyramid(i.e= Invisible Inverted Pyramid)
        {
            cout << "  ";
        }
        
            for (int j = 0; j < i + 1; ++j) //Right Half Pyramid
            {
                cout << "* ";
            }
        
        cout<<endl;
    }
    return 0;
}
