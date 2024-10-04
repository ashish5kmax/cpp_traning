// optimized for rapid delete and insert operaitons but cannot be used for random access
#include <iostream>
#include <list>
using namespace std;

template <typename T>
void printv(const list<T> &v) {
    if(v.empty()) return;
    for(const T &i:v) cout<<i<<" ";
    cout<<endl;
}

int main() {
    list<int>l1 = {1,2,7,3,4,5,6};
    printv(l1);

    // same as vector for front
    
    // pushfront
    l1.push_front(10);
    cout<<"After element pushed at front : "<<endl;
    printv(l1);

    // to insert we use iterator
    list<int>::iterator it1 = l1.begin();
    while((*++it1!=5) && (it1!=l1.end()));
    if(it1 != l1.end()) {
        cout<<"insert 112 before 5"<<endl;
        l1.insert(it1, 112);
    }
    printv(l1);

    // smae for erase
    while((*++it1!=7) && (it1!=l1.end()));
    if(it1 != l1.end()) {
        cout<<"erase 7"<<endl;
        l1.erase(it1);
    }
    printv(l1);

    // remove
    cout<<"Removing 8"<<endl;
    l1.remove(10);
    printv(l1);

    // l1.erase(it1, it2); // for a range of deletion.
    return 0;
}
