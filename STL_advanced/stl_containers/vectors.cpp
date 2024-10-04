#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void printv(const vector<T> &v) {
    if(v.empty()) return;
    for(const T &i:v) cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector<int> v1 = {1,2,3,4,5,6};
    printv(v1);

    //front and back;
    cout<<"front : "<<v1.front()<<endl;
    cout<<"back : "<<v1.back()<<endl;
    
    //insertions pre made.
    cout<<"After insertion : "<<endl;
    v1.insert(v1.begin()+5, 42);
    printv(v1);

    //erase function
    cout<<"After erase : "<<endl;
    v1.erase(v1.begin()+5);
    printv(v1);

    // clear
    cout<<"After clearing : "<<endl;
    v1.clear();
    printv(v1);

    cout<<"Inserting using array : "<<endl;
    v1.insert(v1.begin(), {7,8,9,10});
    printv(v1);

    cout<<"Delete last element from vector : "<<endl;
    v1.pop_back();
    // v1.push_back(element); // to push element at end of vector
    printv(v1);
    return 0;
}