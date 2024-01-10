 #include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        if(j<i){
            cout<<"";// Note : Adjust the Space And See the Changes it will 3 types of Outputs       
            }              //1.Left  Inverted Half Pyramid
                           //2.Inverted Full Pyramid
                           //3.Right Inverted  Half Pyramid
        
        else{
            cout<<" *";
        }
    }
    cout<<endl;
}
return 0;
}