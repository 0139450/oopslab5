#include<iostream>
using namespace std;
class vehicle{
    public:
    void enginee(){
        cout<<"the vehicle's enginee is a petrol enginee"<<endl;
    }
    int vehiclenum=1234;
};
class car:public vehicle{
    public:
    string color="red";

};
int main(){
    car obj;
    obj.enginee();
    cout<<obj.vehiclenum<<endl;
    cout<<obj.color<<endl;

}
