#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  stack<string>stk;
  queue<string>q;
  int n = 0;
  while(n<10) {
    string link;
    cin>>link;
    stk.push(link);

    cout<<"Visiting link.."<<endl;
    cout<<stk.top()<<endl;

    n++;
  }

  n = 0;
  while(n<3) {
    q.push(stk.top());
    stk.pop();
    cout<<"Current position : "<<endl;
    cout<<stk.top()<<endl;
    n++;
  }

  n = 0;
  while(n<4) {
    cout<<"Current positon : "<<endl;
    cout<<q.front()<<endl;
    q.pop();
    n++;
  }

  return 0;
}