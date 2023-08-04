#include<iostream>
#include<vector>
using namespace std;

int main(){

int n;
cin>>n;

    vector <int> brr(n);
    cout<<" Enter the Elements : ";

    for(int i=0;i<brr.size();i++){

        cin>>brr[i];


    }
     for(int i=0;i<brr.size();i++){

        cout<<brr[i]<<" ";


    }
    return 0;

}