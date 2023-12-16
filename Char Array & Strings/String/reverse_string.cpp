#include<iostream>
using namespace std;

int get_length(string word){
    int len=0;

    int i=0;
    while(word[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

void reverse(string word){
    
    int start=0;
    int n=get_length(word);
    // cout<<n;
    int end=n-1;


    while(start<=end){
        swap(word[start],word[end]);
  
        start++;
        end--;

    }
    cout<<word;
}

int main (){
    string word;
    cin>>word;
        cout<<word<<endl;
     reverse(word);
    //  cout<<word<<endl;

    return 0;
}