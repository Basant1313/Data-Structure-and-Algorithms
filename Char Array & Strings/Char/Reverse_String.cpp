#include <iostream>
using namespace std;

int getLength (char name[]){

    int length=0,i =0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

void reverse_char_array (char name[]){

    int i=0;
    int n= getLength(name);
    int j=n-1;

    while (i<=j){

        swap(name[i],name[j]);
        i++;
        j--;
    }

}


int main (){

    char name[100];
    cin>>name;

    int give_length = getLength(name);
    cout<<give_length<<endl;
    
    cout<<"Intially-"<<name<<endl;

    reverse_char_array(name);

    cout<<"After Reversal - "<<name<<endl;

    return 0;
}

