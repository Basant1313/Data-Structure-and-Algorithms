#include<iostream>
using namespace std;

float find_area_of_Circle(int r){
   
    float pie=3.14;

   return (pie*r*r);

}

int main(){

    int radius;
    
    cout<<"Enter the Radius of Circle =";
    cin>>radius;

    float area_of_Circle=find_area_of_Circle(radius);

    cout<<area_of_Circle;
}