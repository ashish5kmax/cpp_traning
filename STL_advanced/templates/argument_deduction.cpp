// we don't need to always need to specify datatypes but if compiler identifies the datatypes we
// don't need to specify them it's called argument deduction.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>

T maxof(const T &a, const T &b) {
    return (a > b ? a : b);
}

// T is our template typename or template datatype
template <typename T>
void printv(const vector<T> &v) {
    if(v.empty()) return;
    for(const T &i:v) cout<<i<<" ";
    cout<<endl;
}

int main() {
    int a = 9;
    int b = 7;

    vector<string> v1 = {"One", "Two", "Three", "Four", "Five"};
    //cout<<"Max of a and b = "<<maxof<int>(a,b)<<endl;
    
    printv(v1);
    return 0;
}