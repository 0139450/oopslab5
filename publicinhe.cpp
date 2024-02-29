#include<iostream>
using namespace std;
class baseclass{
    public:
    int a=10;
    int d(){
        return b;
    }
    private :
    int b=20;
    protected:
    int c=30;
};
class subclass:public baseclass{
    public:
    int e=d();
    int f=c;
};
int main()
{
    subclass obj;
    cout<<obj.a<<endl;
    cout<<obj.f<<endl;
    cout<<obj.e<<endl;
}
