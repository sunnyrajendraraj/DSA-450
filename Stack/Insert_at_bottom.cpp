#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    insertAtBottom(st,6);
    printStack(st);

}