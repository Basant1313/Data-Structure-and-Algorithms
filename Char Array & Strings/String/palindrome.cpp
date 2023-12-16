#include<iostream>
// #include<string.h>
using namespace std;

int get_length (string word)
{
    int length =0;
    int i=0;
    while(word[i]!='\0'){
        i++;
        length++;
    }

    return length;
}
bool check_palindrome (string word){
    int start=0;
    int n= get_length(word);
    int end=n-1;

    while(start<=end){
        if(word[start]!=word[end]){
            return false;
        }

        else {
            start++;
            end--;
        }

    }
    return true;
}

int main (){

    string word;
    cin>> word;

    
   cout<< check_palindrome(word)<<endl;
   cout<<endl;
//    int len = get_length(word);
//    cout<<len;

    

    return 0;
}