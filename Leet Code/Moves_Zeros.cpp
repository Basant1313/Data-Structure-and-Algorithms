#include <iostream>
#include <vector>
using namespace std;


void moves_Zeros(vector<int> &v){

    int j=0;
    int i =0;
    for( i; i<v.size();i++){

        if(v[i] != 0){
            v[j] = v[i];
            j++;
        }
    }

    for(int k=j ; k<v.size() ;k++){
        v[k] = 0;
    }

    for(int i =0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }

}


int main() {


    vector<int> v = {0,1,0,3,12};

    moves_Zeros(v);
}