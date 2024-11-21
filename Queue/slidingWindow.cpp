#include <iostream>
#include <queue>

using namespace std;

void solve(int arr[], int size , int k){

    queue <int> q;
    
    // Process first k element;
    for(int i = 0; i< k; i++){

        if(arr[i]<0){
            q.push(i); // storing index instead of element that will help to find that element present in window of size k
        }
    }

    for (int i =k; i<size ; i++){

        //step 1: answer nikal lo
        if(q.empty()){
            cout<< 0 <<" ";
        }

        else {
            cout<<arr[q.front()]<<" ";
        }

        //step 2:remove karo element from queue which is out of window
        while(!q.empty() && i-q.front() >= k){
            q.pop();
        }

        // check current element for insertion
        if(arr[i] < 0){
            q.push(i);
        }

    }

    // answer print karo last window ke liye 

    if(q.empty()){
        cout<< 0 <<" ";
    }

    else{
        cout<<arr[q.front()]<<" ";
    }
    


}

int main (){

    int k =3;
    int arr[] = {12,-1,-7,8,-15,30,16,28};

    int size = sizeof(arr)/sizeof(int);

    solve(arr,size,k);


    return 0;

}