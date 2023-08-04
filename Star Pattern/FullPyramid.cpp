#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter the number : ";
    cin >> num;

    for (int row = 0; row < num; ++row) // Outer Loop (i.e row)
    {

        for (int col = 0; col < num - (row + 1); ++col)  //  Inner Loop (i.e Columns) : with condition for space
        {
            cout<<" ";
            
        }

        for(int col=0;col<row+1;col++){ // print * in rest part in form of Full Pyramid
            cout<<"* ";
        }
  
        cout<<endl;
    }
    return 0;
}
    
    

