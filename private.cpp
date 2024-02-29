#include<iostream>
using namespace std;
class baseclass{
    public:
    int a=10;
    int h(){
        return b;
    }
    private:
    int b=20;
    protected:
    int c=30;
};
class childclass:private baseclass{
    public:
    int d=40;
    int e(){
        return a;
    }
    int f=h();
    int g(){
        return c;
    }
};
int main()
{
    childclass obj;
    cout<<obj.d<<endl;
    cout<<obj.e()<<endl;
    cout<<obj.f<<endl;;
    cout<<obj.g()<<endl;
}
