#include<iostream>
using namespace std;
class baseclass{
    public:
    int a=10;
    int e(){
        return b;
    };
    private:
    int b=20;
    protected:
    int c=30;
};
class subclass:protected baseclass{
    public:
    int f=a;
    int g=e();
    int h=c;

};
int main(){
    subclass obj;
    cout<<obj.f<<endl;
    cout<<obj.g<<endl;
    cout<<obj.h<<endl;

}
