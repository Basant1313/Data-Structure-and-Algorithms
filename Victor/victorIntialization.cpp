#include<iostream>
#include<vector>
using namespace std;

int  main(){
    int n;
    cin>>n;
    vector <int> arr(n,0);

    for(auto give_num : arr)
   
  cout<<give_num<<" ";
cout<<endl;


    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";

    }
    return 0;
}