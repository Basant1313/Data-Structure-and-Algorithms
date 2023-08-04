#include <iostream>
#include "bird.h"
using namespace std;

void bird_does_something(Bird*&bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->fly();
    bird->fly();
    bird->fly();
}
int main(){
// Merta interface hai Bird naam ka toh bird naame ke interface se aap kuch call kar paoge kisi object ko banake hum isko call nhi karte sakte (private access specifier mein)

// Bird*bird = new sparrow(); 
// bird_does_something(bird); 


// Bird*bird = new eagle();
// bird_does_something(bird); 

Bird*bird = new pegion();
bird_does_something(bird); 



}