#include<iostream>
using namespace std;
class A{
    public:
    void a(){
        cout<<"a class"<<endl;
    }
};
class B:public A{
    public:
    void b(){
        cout<<"b class"<<endl;
    }
};
class C:public A{
    public:
    void c(){
        cout<<"c class"<<endl;
    }
};
class D:public B,public C{
    public:
    void d(){
        cout<<"d class"<<endl;
    }
};
int main(){
    D obj;
    obj.d();
    obj.c();
   // obj.a();
    obj.d();

}
