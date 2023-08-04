#include <iostream>
using namespace std;

int main()
{

    int arr[5]; // array declaration

    cout << "Enter the Values in Array = ";

    for (int i = 0; i < 5; i++) // initalizing array
    {

        cin >> arr[i];
    }
    // Printing array elements
    cout << "Printing the Values in Array ";
     for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}