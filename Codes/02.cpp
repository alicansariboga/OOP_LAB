#include <iostream >
using namespace std;
#define SIZE 10

class stack{
    int stck[SIZE];
    int tos;
    public:
    stack();
    void push(int ch);
    int pop();
};

stack::stack(){
    cout << "Constructing a stack\n";
    tos = 0;
}

void stack::push(int ch){
    if(tos==SIZE){
        cout << "Stack is Full\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

int stack::pop(){
    if(tos==0){
        cout << "Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack s1,s2;
    s1.push(1); s2.push(9);
    s1.push(2); s2.push(8);
    s1.push(3); s2.push(7);

    for(int i=0; i<3; i++) cout << "Pop s1: " << s1.pop() <<"\n";
    for(int i=0; i<3; i++) cout << "Pop s2: " << s2.pop() <<"\n";

    return 0;
    }