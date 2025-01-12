#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    //Inserting elements in stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> temp; // Using extra space O(n)
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    } // st is emptied here
    while(temp.size()>0){
        st.push(temp.top());
        // cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    cout<<"Top of the original Stack is "<<st.top()<<endl;
}

