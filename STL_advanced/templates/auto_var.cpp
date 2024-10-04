#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

template <typename lT, typename rT>
auto tf(const lT &lhs, const rT &rhs) {
    return lhs + rhs;
}

int main() {
    const char * cstr = "this is a c-string";
    const string sclass = string("this is a string class string");
    for(auto it = sclass.begin(); it!=sclass.end(); ++it) {
        cout<<*it;
    }
    cout<<endl;
    for(auto c:sclass) {
        cout<<c;
    }
    cout<<endl;

    auto z = tf<string, const char *>(sclass, cstr);
    cout<<"z is "<<z<<" "<<endl;
    cout<<"type of z is "<<typeid(z).name()<<endl;
    return 0; 
}