#include <iostream>
#include <unordered_map>
using namespace std;


int main(){

    unordered_map <string, int> map;

    // diffferent way to initialize hashmap or insert

    map["fortuner"] = 10;

    
    pair<string , int> p = make_pair("Scorpio", 9);

    map.insert(p);

    pair<string , int> p2 ("Alto", 2);
    map.insert(p2);

    // access
    cout<<map.at("Scorpio")<<endl;
    cout<<map.at("Alto")<<endl;


    cout<<map["fortuner"]<<endl;

    cout<<map.count("fortuner")<<endl;



    cout<<"Before Innova : "<<map.size()<<endl;
    cout<<map["Innova"]<<endl; // though we did't initialize it but in hashmap a entry of it get registered with the value initialize (default value) to 0 that's why are able to see size of hashmap 4 instead of 3 and Note: this syntax only creates a entry int hashmap other syntax will not create any entry in it. (tip note imp for interview)

    cout<<"After Innova : "<<map.size()<<endl; 


    if(map.find("fortuner") != map.end()){

        cout<<"Fourtuner Found"<<endl;
    } else{
        cout<<"Not Found"<<endl;
    }


    cout<<"Printing all entries in hashmap"<<endl;

    // using for each loop

    for(auto i : map){
        cout<< i.first <<" -> " << i.second<<endl;
    }

    string str = "thiruvanthanapuram";

    unordered_map <char ,int> freq;

    for(int i = 0 ; i < str.length() ; i++){

        char ch = str[i];

        freq[ch]++;
    }

    for (auto i : freq){
        cout<<i.first <<" -> "<<i.second<<endl;
    }

    return 0;
}
