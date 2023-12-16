#include <iostream>
#include <string.h>
using namespace std;

bool check_palindrome(char arr[]){

    int i=0;
    int n=strlen(arr);
    int j=n-1;

    while(i<=j){
        if(arr[i]!=arr[j])
            return false;

        else
            i++;
            j--;
            

        
    }
    return true;
}


int main() {

    char arr[100];
    cin>>arr;

    cout<<"Palindrome check : "<<check_palindrome(arr);


    return 0;
}