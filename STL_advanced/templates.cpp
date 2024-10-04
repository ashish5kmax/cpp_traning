#include <iostream>
using namespace std;

template <typename T>

T maxof(const int &a, const int &b) {
    return (a > b ? a : b);
}

int main() {
    int a = 9;
    int b = 7;

    cout<<"Max of a and b = "<<maxof<int>(a,b)<<endl;
    return 0;
}