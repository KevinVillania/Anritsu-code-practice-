#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> stack1){

    while(!stack1.empty()){

        cout << stack1.top() << " ";
        stack1.pop();
    }

}



int main(){

    stack<int> s1;

    s1.push(24);
    s1.push(213);
    s1.push(11);

    cout << s1.size() << endl;

    showStack(s1);
}
