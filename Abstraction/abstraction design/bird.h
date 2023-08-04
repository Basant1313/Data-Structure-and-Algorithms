#if !defined(BIRD_H) // ye line iss liye use hota hai kyuki baar baar BIRD_H kitne baar include karre phir voh ek hi baar include hoga
#define BIRD_H
#include <iostream>
class Bird{
    public:
    virtual void eat ()=0;//pure virtual function kisi class ke andar declare karte hain toh voh class ek interface ban jati hai
    virtual void fly()=0;
    //classes that inherits this class has to implement pure virtual function
};

class sparrow : public Bird{
    public:
    void eat(){
       std::cout<<"Sparrow is eating\n";
    }

    void fly(){
        std::cout<<"Sparrow is flying\n";
    }
} ;

class eagle : public Bird{
    public:
    void eat(){
       std::cout<<"Eagle is eating\n";
    }

    void fly(){
        std::cout<<"Eagle is flying\n";
    }
} ;
class pegion : public Bird{
    public:
    void eat(){
       std::cout<<"Pegion is eating\n";
    }

    void fly(){
        std::cout<<"Pegion is flying\n";
    }
} ;


#endif // BIRD_H
