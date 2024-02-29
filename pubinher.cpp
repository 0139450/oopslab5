/*Demonstrate the following :
1. Private Inheritance
2. Protected Inheritance
3. Public Inheritance*/
#include<iostream>
using namespace std;
class vehicle{
    public:
    void wheeler(){
        cout<<"the vehicle is four wheeler"<<endl;
    }
    void show(){
        cout<<model<<endl;
    }
    private:
    int model=77;
    protected:
    int a=5;
    
};
class car:public vehicle{
    public:
    void display(){
        cout<<"the car is a four wheeler inherits the vehicle property"<<endl;
    }
    void show1(){
        cout<<a<<endl;
    }
};
/*class car:private vehicle{
    public:
    void display(){
        cout<<"the car is a four wheeler inherits the vehicle property"<<endl;
    }

};*/
/*class car:protected vehicle{
    public:
    void display(){
        cout<<"the car is a four wheeler inherits the vehicle property"<<endl;
    }
};*/
int main(){
    car obj;
    obj.wheeler();
    obj.display();
    obj.show();
    obj.show1();
}
