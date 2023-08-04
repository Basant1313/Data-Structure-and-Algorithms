#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the Number : ";
    cin>>num;
    for (int row = 0; row < num; row++) // Outer loop for rows
    { 
        for(int col=0; col<num;col++){ // Inner Loop for Columns
            cout<<" *";
        }
        cout<<endl; // To jump to Next Line after each column execution
    }
    return 0;
}