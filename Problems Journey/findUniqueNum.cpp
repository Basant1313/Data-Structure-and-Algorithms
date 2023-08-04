#include<vector>
#include<iostream>
using namespace std;

int find_unique(vector<int>crr){
    int ans=0;

    for(int i=0;i<crr.size();i++){
        ans=ans^crr[i];

    }

    return ans;

}

int main(){
    int n;
    cin>>n;

    vector <int> crr(n);

    cout<<"Enter the Elements = ";
    for(int i=0;i<crr.size();i++){
        cin>>crr[i];
    }


    int unique_element=find_unique(crr);
    cout<<unique_element;
    

}
