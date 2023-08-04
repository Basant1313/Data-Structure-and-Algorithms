#include<iostream>
using namespace std;

float find_Temp(int c){
  
  return ((9*c/5)+32);
}

int main(){

    int celcius;
    cout<<"Enter The temperature in Celcius : ";
    cin>>celcius;

    float temp_Farehneit=find_Temp(celcius);

    cout<<temp_Farehneit;

    return 0;
}