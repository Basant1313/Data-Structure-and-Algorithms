#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int row = 0; row < num; row++)
    {
        int k=0;
        for (int col = 0; col < 2*num-1; col++){
            if(col<row){
                cout<<"  ";

            }
            else if (k<2*num-row){
                cout<<"* ";
                k++;
            
            }
            
        }
    


        
    cout << endl;
    }
return 0;

}
