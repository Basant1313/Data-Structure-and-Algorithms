#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i,j,k;
	    k=n;
	    for(i=0;i<n;i++){
	        //space
	        for(j=0;j<i;j++)
	        {
	            cout<<"  ";
	        }
	        //stars
	        for(j=0;j<k*2-1;j++){
	            cout<<"* ";
	            
	        }
	        cout<<endl;
	        k--;
	    }
	    // code here
	}