#include<iostream>
using namespace std;
//parent class1
class vehicle{
    public:
    void color(){
        cout<<"the color of the vehicle is black"<<endl;
    }
    void enginee(){
        cout<<"vehicle has petrol enginee"<<endl;
    }
};
//parent class2
class fourwheeler{
    public:
    void speed(){
        cout<<"maximum 100kmph"<<endl;
    }
    void vehicles(){
        vehicletype();
    }
    private:
    void vehicletype(){
        cout<<"vans,autos,jeeps"<<endl;
    }
};
//multiple inheritance
class car:public vehicle,public fourwheeler{
    void company(){
        cout<<"the car is from swift company"<<endl;
    }
};
//single inheritance
class bike:public vehicle{
    public:
    void wheels(){
        cout<<"two wheeler vehicle."<<endl;
    }
    
};
//multilevel inheritance
class scooty:public bike{};
int main(){
    vehicle obj;
    fourwheeler obj1;
    car obj2;
    bike obj3;
    scooty obj4;
    obj.color();
    obj.enginee();
    obj1.speed();
    obj1.vehicles();
    obj2.color();
    obj2.speed();
    obj2.vehicles();
    obj3.color();
    obj3.enginee();
    obj3.wheels();
    obj4.color();
    obj4.wheels();
}
