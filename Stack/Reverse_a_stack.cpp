#include<iostream>
#include<stack>
#include<vector>
using namespace std;

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

    vector<int> v;
    while(st.size()>0){
        v.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<v.size();i++){
        st.push(v[i]);
    }
    printStack(st);
}