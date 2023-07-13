// #include "iostream"
// using namespace std;
// int a(int x){
//     x++;
//     return x;
// }
// void b(int* x){
//     x += 2;
//     return;
// }
// int c(int& x){
//     x += 4;
//     return x;
// }
// int main()
// {
//     int x = 0;
//     cout<<a(x);
//      b(&x);
//     cout<<c(x);
//     cout<<x<<"\n";
// }

#include "iostream"
#include "memory"
using namespace std;
#define MAX(a,b)\ 
        a>b ? a:b
int main()
{
    int a = 1;
    int b = 2;
    int c ;
    c = 3 + MAX(a,b) + 4;
    cout<<c<<"\n";
}

// #include "iostream"
// using namespace std;

// struct A{
//     void ohai() {cout<!}
// };
// struct B : protected A {};
// struct C : private A {
//     friend int main();
//     cout<<3;
// };

// struct D : B {
//     void test(){
//         ohai();
//         cout<<1;
//     }
// };
// struct E: C{
//     void test(){
//         //ohai();
//         cout<<2;
//     }
// };
// int main()
// {
//     A().ohai();
//    // B().ohai();
//     C().ohai();
//     E().ohai();
// }

// #include "bits/stdc++.h"
// using namespace std;
// struct Base{
//     Base() {f("Base::ctor");}
//     virtual  ~Base() {f("Base::dtor");}

//     virtual void f(char const* label) const {cout<< label <<": Base\n";}
//     void g() const {return f("Base::g");}
// };
// struct Derived : Base {
//     Derived() {f("Derived::ctor");}
//     ~Derived() {f("Derived::dtor");}
//     void f(char const* label) const{ cout<< label<<"Derived\n";}
//     void g() const {return f("Derived::g");}
// };
// int main()
// {
//     unique_ptr<Base> b(new Derived);
//     b->g();
// }

